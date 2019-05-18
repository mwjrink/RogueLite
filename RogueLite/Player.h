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

    void set_unit_velocity_up(int _, int __);
    void set_unit_velocity_down(int _, int __);
    void set_unit_velocity_left(int _, int __);
    void set_unit_velocity_right(int _, int __);
    void stop_velocity_up(int _, int __);
    void stop_velocity_down(int _, int __);
    void stop_velocity_left(int _, int __);
    void stop_velocity_right(int _, int __);
}  // namespace player
