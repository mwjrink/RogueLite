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
        dist                 = 100.0f;

        float x = 500, y = 500;
        for (int i = 0; i < 8; i++)
        {
            nodes.push_back(Node(x + dist * i, y, 1.0f));
        }

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
        auto old_position = get_head(s).position;
        if (get_head(s).velocity.x != 0.0f || get_head(s).velocity.y != 0.0f)
            get_head(s).position += glm::normalize(get_head(s).velocity) * s.speed * dt;
        // quad_tree::move_entity(*world::collision_tree, &p, old_position);

        for (auto i = 1; i < s.nodes.size(); i++)
        {
            auto dir = s.nodes[i - 1].position - s.nodes[i].position;
            if (glm::length(dir) > s.dist)
                s.nodes[i].velocity += glm::normalize(dir);
            else
                s.nodes[i].velocity = glm::vec2(0.0f);
        }

        for (auto it = s.nodes.begin(); it != s.nodes.end(); it++)
        {
            it->position += it->velocity * s.speed * dt;
        }
    }

    void render(Skeleton& s)
    {
        for (auto e : s.nodes)
        {
            s.r.position = e.position;
            s.r.scale    = e.radius;
            graphics::DrawRenderable(s.r, graphics::shaderProgram);
        }
    }

    Skeleton::Node& get_head(Skeleton& s) { return s.nodes[s.headIndex]; }

}  // namespace proc_anim
