#pragma once

#include "Entity.h"

struct Creature : public physics::Entity
{
    int max_health;
    int current_health;

    int speed;
};
