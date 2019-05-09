#include "Skeleton.h"

#include "World.h"

#include <iostream>

namespace proc_anim
{
    void set_unit_velocity_up(int _, int __) { get_head(world::skeleton).velocity.y++; }
    void set_unit_velocity_down(int _, int __) { get_head(world::skeleton).velocity.y--; }
    void set_unit_velocity_left(int _, int __) { get_head(world::skeleton).velocity.x--; }
    void set_unit_velocity_right(int _, int __) { get_head(world::skeleton).velocity.x++; }
    void stop_velocity_up(int _, int __) { get_head(world::skeleton).velocity.y--; }
    void stop_velocity_down(int _, int __) { get_head(world::skeleton).velocity.y++; }
    void stop_velocity_left(int _, int __) { get_head(world::skeleton).velocity.x++; }
    void stop_velocity_right(int _, int __) { get_head(world::skeleton).velocity.x--; }

    Skeleton::Skeleton()
    {
        r.tile_sheet = Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/node.png"), glm::ivec2(1, 1));
        // r.position   = glm::vec2(1720.0f, 980.0f);
        r.position           = glm::vec2(0.0f, 0.0f);
        r.size               = glm::vec2(16.0f, 16.0f);
        r.scale              = 1.0f;
        r.current_tile_index = 0;
        speed                = 192.0f;
        dist                 = 20.0f;

        float x = 500, y = 500;
        for (int i = 0; i < 16; i++)
        {
            spine_nodes.push_back(Node(x + dist * i, y, 1.0f));
        }

        foot_nodes.push_back(Foot_Node(x + dist * 1, y + 20.0f, 1.0f, 1, 20.0f, false));
        foot_nodes.push_back(Foot_Node(x + dist * 1, y - 20.0f, 1.0f, 1, 20.0f, true));
        foot_nodes.push_back(Foot_Node(x + dist * 8, y + 20.0f, 1.0f, 8, 20.0f, false));
        foot_nodes.push_back(Foot_Node(x + dist * 8, y - 20.0f, 1.0f, 8, 20.0f, true));

        // TODO: ABOLISH THIS SYSTEM IN FAVOUR OF POLLING :'(
        // input::delegate_type dLambda = [](int key, int action) {
        //    switch (action)
        //    {
        //        case GLFW_PRESS:
        //            switch (key)
        //            {
        //                case GLFW_KEY_W: set_unit_velocity_up(world::player); break;
        //                case GLFW_KEY_A: set_unit_velocity_left(world::player); break;
        //                case GLFW_KEY_S: set_unit_velocity_down(world::player); break;
        //                case GLFW_KEY_D: set_unit_velocity_right(world::player); break;
        //            };
        //            break;
        //        case GLFW_RELEASE:
        //            switch (key)
        //            {
        //                case GLFW_KEY_W: stop_velocity_up(world::player); break;
        //                case GLFW_KEY_A: stop_velocity_left(world::player); break;
        //                case GLFW_KEY_S: stop_velocity_down(world::player); break;
        //                case GLFW_KEY_D: stop_velocity_right(world::player); break;
        //            };
        //            break;
        //    }
        //};

        input::copy_add_event(GLFW_KEY_W, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_up>());
        input::copy_add_event(GLFW_KEY_A, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_left>());
        input::copy_add_event(GLFW_KEY_S, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_down>());
        input::copy_add_event(GLFW_KEY_D, GLFW_PRESS, &input::delegate_type::create<&proc_anim::set_unit_velocity_right>());
        input::copy_add_event(GLFW_KEY_W, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_up>());
        input::copy_add_event(GLFW_KEY_A, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_left>());
        input::copy_add_event(GLFW_KEY_S, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_down>());
        input::copy_add_event(GLFW_KEY_D, GLFW_RELEASE, &input::delegate_type::create<&proc_anim::stop_velocity_right>());
    }

    void move(Skeleton& s, float dt)
    {
        // Spine
        auto old_position = get_head(s).position;
        if (get_head(s).velocity.x != 0.0f || get_head(s).velocity.y != 0.0f)
            get_head(s).position += glm::normalize(get_head(s).velocity) * s.speed * dt;
        // quad_tree::move_entity(*world::collision_tree, &p, old_position);

        for (auto i = 1; i < s.spine_nodes.size(); i++)
        {
            auto dir = s.spine_nodes[i - 1].position - s.spine_nodes[i].position;
            if (glm::length(dir) > s.dist)
                s.spine_nodes[i].velocity += glm::normalize(dir);
            else
                s.spine_nodes[i].velocity = glm::vec2(0.0f);
        }

        // Feet
        for (auto f = s.foot_nodes.begin(); f != s.foot_nodes.end(); f++)
        {
            // if (f->cooldown > 0)
            //{
            //    f->cooldown--;
            //    continue;
            //}

            /************************************************************************************/
            // check if stationary, if so check if distance > leg_length before moving, if not check if distance > leg_length
            // after moving and decide not to move instead
            /************************************************************************************/

            if (f->stationary)
            {
                if (glm::distance(f->position, s.spine_nodes[f->spine_index].position) > f->leg_length)
                {
                    f->stationary = false;
                }
                else
                {
                    f->velocity = glm::vec2(0.0f);
                }
            }

            if (!f->stationary)
            {
                auto dir =
                    glm::normalize(s.spine_nodes[f->spine_index - 1].position - s.spine_nodes[f->spine_index].position);

                auto step_dest = s.spine_nodes[f->spine_index].position + dir * f->leg_length * 2.0f +
                                 glm::vec2(-dir.y, dir.x) * (f->direction ? -f->leg_length : f->leg_length);

                f->velocity = glm::normalize(step_dest - f->position);

                auto final_position = f->position + f->velocity * s.speed * 2.0f * dt;

                if (glm::distance(final_position, s.spine_nodes[f->spine_index].position) > f->leg_length)
                {
                    f->stationary = true;
                    f->velocity   = glm::vec2(0.0f);
                }
                else
                {
                    f->position = final_position;
                }
            }

            // if (glm::distance(f->position, s.spine_nodes[f->spine_index].position) > f->leg_length)
            //{
            //    f->stationary = !f->stationary;
            //    // f->cooldown   = 5;
            //}

            // if (f->stationary)
            //{
            //    f->velocity = glm::vec2(0.0f);
            //}
            // else
            //{
            //    // if (s.spine_nodes[f->spine_index].velocity != glm::vec2(0.0f))
            //    f->velocity = s.spine_nodes[f->spine_index].velocity;
            //    // glm::normalize(s.spine_nodes[f->spine_index - 1].position - s.spine_nodes[f->spine_index].position);
            //}

            // auto dir = glm::normalize(s.spine_nodes[f->spine_index - 1].position -
            // s.spine_nodes[f->spine_index].position); f->position = s.spine_nodes[f->spine_index].position + dir *
            // f->leg_length * 2.0f +
            //              glm::vec2(-dir.y, dir.x) * (f->direction ? -f->leg_length : f->leg_length);
        }

        // for (auto it = s.foot_nodes.begin(); it != s.foot_nodes.end(); it++)
        //{
        //    it->position += it->velocity * s.speed * 2.0f * dt;
        //}

        //// Feet
        // for (auto f = s.foot_nodes.begin(); f != s.foot_nodes.end(); f++)
        //{
        //    if (glm::distance(f->position, s.spine_nodes[f->spine_index].position) > f->leg_length)
        //    {
        //        f->stationary = !f->stationary;
        //    }

        //    if (f->stationary)
        //    {
        //        f->velocity = glm::vec2(0.0f);
        //    }
        //    else
        //    {
        //        auto dir =
        //            glm::normalize(s.spine_nodes[f->spine_index - 1].position - s.spine_nodes[f->spine_index].position);
        //        f->velocity = glm::normalize((s.spine_nodes[f->spine_index].position + dir * f->leg_length * 2.0f +
        //                                      glm::vec2(-dir.y, dir.x) * (f->direction ? -f->leg_length : f->leg_length)) -
        //                                     f->position);
        //        // if (s.spine_nodes[f->spine_index].velocity != glm::vec2(0.0f))
        //        // f->velocity = s.spine_nodes[f->spine_index].velocity;
        //        // glm::normalize(s.spine_nodes[f->spine_index - 1].position - s.spine_nodes[f->spine_index].position);
        //    }
        //}

        // for (auto it = s.foot_nodes.begin(); it != s.foot_nodes.end(); it++)
        //{
        //    it->position += it->velocity * s.speed * 2.0f * dt;
        //}

        for (auto it = s.spine_nodes.begin(); it != s.spine_nodes.end(); it++)
        {
            it->position += it->velocity * s.speed * dt;
        }
    }

    void render(Skeleton& s)
    {
        for (auto e : s.spine_nodes)
        {
            s.r.position = e.position;
            s.r.scale    = e.radius;
            graphics::DrawRenderable(s.r, graphics::shaderProgram);
        }

        for (auto e : s.foot_nodes)
        {
            s.r.position = e.position;
            s.r.scale    = e.radius;
            graphics::DrawRenderable(s.r, graphics::shaderProgram);
        }
    }

    Skeleton::Node& get_head(Skeleton& s) { return s.spine_nodes[s.headIndex]; }

}  // namespace proc_anim
