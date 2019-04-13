#pragma once

#include <vector>
#include "Entity.h"
#include "Level.h"
#include "Player.h"
#include "QuadTree.h"

namespace world
{
    extern player::Player     player;
    extern level::Level       current_level;
    extern float              width, height;
    extern quad_tree::Branch* collision_tree;

    void Update(float dt);

    void Render();

}  // namespace world
