#pragma once

#include <vector>
#include "Entity.h"
#include "LGrid.h"
#include "Level.h"
#include "Player.h"
#include "Skeleton.h"

namespace world
{
    extern player::Player      player;
    extern proc_anim::Skeleton skeleton;
    extern level::Level        current_level;
    extern unsigned int        width, height;

    // TODO: this should be a unique_ptr
    extern quad_tree::LGrid* collision_tree;

    void Update(float dt);

    void Render();

    void UpdateCurrentLevel(const level::Level& level);

}  // namespace world
