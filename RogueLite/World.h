#pragma once

#include <vector>
#include "Entity.h"
#include "Level.h"
#include "Player.h"
#include "QuadTree.h"

namespace world
{
    extern player::Player player;
    extern level::Level   current_level;
    extern float          width, height;

    // TODO: this should be a unique_ptr
    extern quad_tree::Branch* collision_tree;

    void Update(float dt);

    void Render();

    void UpdateCurrentLevel(const level::Level& level);

}  // namespace world
