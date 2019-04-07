#pragma once

#include "Entity.h"

class Creature : physics::Entity
{
    int max_health;
    int current_health;

    int speed;
};
