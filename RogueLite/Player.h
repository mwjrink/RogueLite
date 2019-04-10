#pragma once

#include <glad/glad.h>
#include <GLFW/glfw3.h>

#include "Entity.h"
#include "InputManager.h"

namespace player
{
    struct Player : public physics::Entity
    {
        int max_health;
        int current_health;

        float speed;
    };

    void player_init(Player& p);

    void move(Player& p, float dt);

    void set_unit_velocity_up(Player& p);
    void set_unit_velocity_down(Player& p);
    void set_unit_velocity_left(Player& p);
    void set_unit_velocity_right(Player& p);
    void stop_velocity_up(Player& p);
    void stop_velocity_down(Player& p);
    void stop_velocity_left(Player& p);
    void stop_velocity_right(Player& p);
}  // namespace player
