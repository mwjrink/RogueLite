#pragma once

#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#include <GL/glcorearb.h>
#include <GL/src/gl3w.c>
#endif

#include <GLFW/glfw3.h>

#include "Entity.h"
#include "InputManager.h"

namespace player
{
    struct Player : public physics::Entity
    {
        int max_health;
        int current_health;

        float                speed;
        input::delegate_type dLambda;
    };

    void player_init(Player& p);

    void move(Player p, float dt);

    void increment_velocity_up(Player p);
    void increment_velocity_down(Player p);
    void increment_velocity_left(Player p);
    void increment_velocity_right(Player p);
}  // namespace player
