#pragma once

#include <vector>
#include "Entity.h"
#include "Level.h"
#include "QuadTree.h"
#include "Player.h"

namespace world
{
    player::Player             player;
    level::Level       current_level;
    float              width, height;
    quad_tree::Branch* collision_tree;

    void Update(float dt) {}

    void Render() { level::RenderLevel(&current_level); }

}  // namespace world
