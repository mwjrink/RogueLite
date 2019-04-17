#pragma once

#include <algorithm>
#include <vector>

#include "Entity.h"

namespace quad_tree
{
    const int entity_threshold = 10;

    struct Branch
    {
        std::vector<physics::Entity*> entities;
        float                         min_x = 0, max_x = FLT_MAX;
        float                         min_y = 0, max_y = FLT_MAX;
        bool                          split = false;

        ~Branch()
        {
            if (split)
            {
                if (top_left) delete top_left;
                if (bot_left) delete bot_left;
                if (top_right) delete top_right;
                if (bot_right) delete bot_right;
            }
        }

        // TODO: these should be unique_ptr
        Branch* top_left  = nullptr;
        Branch* bot_left  = nullptr;
        Branch* top_right = nullptr;
        Branch* bot_right = nullptr;
    };

    Branch* Create_Tree(float width, float height);

    void add_entity(Branch& b, physics::Entity* e);

    bool is_in_branch(Branch& b, physics::Entity* e);

    bool is_in_branch(Branch& b, physics::Entity* e, glm::vec2 old_position);

    bool is_in_branch(Branch& b, physics::Entity* e, float old_scale);

    // TODO: split smartly, if necessary
    void split(Branch& b);

    // NOT DONE
    void move_entity(Branch& b, physics::Entity* e, glm::vec2 old_position);

    std::vector<physics::Entity*> get_collidable(Branch& b, physics::Entity* e);

    std::vector<physics::Entity*> get_visible(Branch& b, const glm::vec4& viewport);

    void scale_entity(Branch& b, physics::Entity* e, float old_scale);
}  // namespace quad_tree
