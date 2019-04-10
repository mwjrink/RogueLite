#pragma once

#include "Entity.h"

namespace creature
{
    struct Creature : public physics::Entity
    {
        int max_health;
        int current_health;

        float speed;
    };

    void move(Creature& c, float dt);

	void increment_velocity_up(Creature& c);
    void increment_velocity_down(Creature& c);
    void increment_velocity_left(Creature& c);
    void increment_velocity_right(Creature& c);
}  // namespace creature
