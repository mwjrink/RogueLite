#include "Player.h"
#include <iostream>
#include "World.h"

namespace player
{
    void player_init(Player& p)
    {
        p.tile_sheet = Create_TileSheet(gltexture::AllocateTextureForLoading("Resources/SpriteSheet.png"), glm::ivec2(4, 4));
        // r.position   = glm::vec2(1720.0f, 980.0f);
        p.position           = glm::vec2(500.0f, 300.0f);
        p.velocity           = glm::vec2(0.0f, 0.0f);
        p.size               = glm::vec2(100.0f, 100.0f);
        p.scale              = 1.0f;
        p.current_tile_index = 0;
        p.speed              = 480.0f;

        // TODO: ABOLISH THIS SYSTEM IN FAVOUR OF POLLING :'(
        input::delegate_type dLambda = [](int key, int action) {
            if (key == GLFW_KEY_W)
            {
                if (action == GLFW_PRESS) set_unit_velocity_up(world::player);
                if (action == GLFW_RELEASE) stop_velocity_up(world::player);
            }
            if (key == GLFW_KEY_A)
            {
                if (action == GLFW_PRESS) set_unit_velocity_left(world::player);
                if (action == GLFW_RELEASE) stop_velocity_left(world::player);
            }
            if (key == GLFW_KEY_S)
            {
                if (action == GLFW_PRESS) set_unit_velocity_down(world::player);
                if (action == GLFW_RELEASE) stop_velocity_down(world::player);
            }
            if (key == GLFW_KEY_D)
            {
                if (action == GLFW_PRESS) set_unit_velocity_right(world::player);
                if (action == GLFW_RELEASE) stop_velocity_right(world::player);
            }
        };

        input::copy_add_event(GLFW_KEY_W, GLFW_PRESS, &dLambda);
        input::copy_add_event(GLFW_KEY_A, GLFW_PRESS, &dLambda);
        input::copy_add_event(GLFW_KEY_S, GLFW_PRESS, &dLambda);
        input::copy_add_event(GLFW_KEY_D, GLFW_PRESS, &dLambda);
        input::copy_add_event(GLFW_KEY_W, GLFW_RELEASE, &dLambda);
        input::copy_add_event(GLFW_KEY_A, GLFW_RELEASE, &dLambda);
        input::copy_add_event(GLFW_KEY_S, GLFW_RELEASE, &dLambda);
        input::copy_add_event(GLFW_KEY_D, GLFW_RELEASE, &dLambda);
    }

    void move(Player& p, float dt)
    {
        if (p.velocity.x != 0.0f || p.velocity.y != 0.0f) p.velocity = glm::normalize(p.velocity);
        p.position += p.velocity * p.speed * dt;
    }

    void set_unit_velocity_up(Player& p) { p.velocity.y = 1; }
    void set_unit_velocity_down(Player& p) { p.velocity.y = -1; }
    void set_unit_velocity_left(Player& p) { p.velocity.x = -1; }
    void set_unit_velocity_right(Player& p) { p.velocity.x = 1; }
    void stop_velocity_up(Player& p) { p.velocity.y = (p.velocity.y > 0) ? 0 : p.velocity.y; }
    void stop_velocity_down(Player& p) { p.velocity.y = (p.velocity.y < 0) ? 0 : p.velocity.y; }
    void stop_velocity_left(Player& p) { p.velocity.x = (p.velocity.x < 0) ? 0 : p.velocity.x; }
    void stop_velocity_right(Player& p) { p.velocity.x = (p.velocity.x > 0) ? 0 : p.velocity.x; }
}  // namespace player
