#pragma once

#include <vector>
#include "Effect.h"
#include "Entity.h"

class Item : Entity
{
    bool                consumable;
    std::vector<Effect> effects;
};
