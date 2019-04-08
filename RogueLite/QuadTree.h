#pragma once

#include <vector>

#include "Entity.h"
#include "World.h"

namespace collision_tree
{
    const int entity_threshold = 10;

    struct Branch
    {
        std::vector<physics::Entity> entities;
        float                        min_x, min_y, max_x, max_y;

        Branch* top_left  = nullptr;
        Branch* bot_left  = nullptr;
        Branch* top_right = nullptr;
        Branch* bot_right = nullptr;
    };

    Branch Create_Tree()
    {
        auto b  = Branch();
        b.min_x = 0.0f;
        b.min_y = 0.0f;
        b.max_x = world::width;
        b.max_y = world::height;
        return b;
    }

    void add_entity(Branch b, physics::Entity e)
    {
        // b.hh;
        // hh;
    }

    std::vector<physics::Entity*> get_collidable(Branch b, physics::Entity e)
    {
        // hh;
        // hh;
    }
}  // namespace collision_tree
