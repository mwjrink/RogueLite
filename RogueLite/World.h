#pragma once

#include <vector>
#include "Entity.h"
#include "Level.h"

namespace world
{
    // TODO: MAKE THESE CLASSES
    // class Player;

    // Player              player;
    level::Level        current_level;
    std::vector<Entity> entities;

    void Update(float dt) {}

    void Render() { level::RenderLevel(&current_level); }

}  // namespace world
