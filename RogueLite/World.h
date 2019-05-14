#pragma once

#include <vector>
#include "Entity.h"
#include "HumanoidSkeleton.h"
#include "LGrid.h"
#include "Level.h"
#include "Player.h"

namespace world
{
    extern player::Player              player;
    extern proc_anim::HumanoidSkeleton skeleton;
    extern level::Level                current_level;
    extern unsigned int                width, height;

    // TODO: this should be a unique_ptr
    extern quad_tree::LGrid* collision_tree;

    void Update(float dt);

    void Render();

    void UpdateCurrentLevel(const level::Level& level);

}  // namespace world
