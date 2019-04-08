#pragma once

#include <vector>

#include "Entity.h"
#include "World.h"

namespace collision_tree
{
    const int entity_threshold = 10;

    struct Branch
    {
        std::vector<physics::Entity*> entities;
        float                         min_x, min_y, max_x, max_y;
        bool                          split = false;

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

    void add_entity(Branch& b, physics::Entity* e)
    {
        if (!b.split)
            if (b.entities.size() == entity_threshold)
                split(b);
            else
                return b.entities.push_back(e);

        if (is_in_branch(*b.top_left, e))
            add_entity(*b.top_left, e);
        else if (is_in_branch(*b.top_right, e))
            add_entity(*b.top_right, e);
        else if (is_in_branch(*b.bot_left, e))
            add_entity(*b.bot_left, e);
        else if (is_in_branch(*b.bot_right, e))
            add_entity(*b.bot_right, e);
        else
            b.entities.push_back(e);
    }

    bool is_in_branch(Branch& b, physics::Entity* e)
    {
        return (e->world_space_position.x + e->bounding_box_width < b.max_x && e->world_space_position.x > b.min_x &&
                e->world_space_position.y + e->bounding_box_width > b.max_y && e->world_space_position.y < b.min_y);
    }

    bool is_in_branch(Branch& b, physics::Entity* e, glm::vec2 old_position)
    {
        return (old_position.x + e->bounding_box_width < b.max_x && old_position.x > b.min_x &&
                old_position.y + e->bounding_box_width > b.max_y && old_position.y < b.min_y);
    }

    // TODO: split smartly, if necessary
    void split(Branch& b)
    {
        b.top_left        = new Branch();
        b.top_left->max_y = b.max_y;
        b.top_left->min_y = (b.max_y - b.min_y) / 2.0f;
        b.top_left->max_x = (b.max_x - b.min_x) / 2.0f;
        b.top_left->min_x = b.min_x;

        b.top_right        = new Branch();
        b.top_right->max_y = b.max_y;
        b.top_right->min_y = (b.max_y - b.min_y) / 2.0f;
        b.top_right->max_x = b.max_x;
        b.top_right->min_x = (b.max_x - b.min_x) / 2.0f;

        b.bot_left        = new Branch();
        b.bot_left->max_y = (b.max_y - b.min_y) / 2.0f;
        b.bot_left->min_y = b.min_y;
        b.bot_left->max_x = (b.max_x - b.min_x) / 2.0f;
        b.bot_left->min_x = b.min_x;

        b.bot_right        = new Branch();
        b.bot_right->max_y = (b.max_y - b.min_y) / 2.0f;
        b.bot_right->min_y = b.min_y;
        b.bot_right->max_x = b.max_x;
        b.bot_right->min_x = (b.max_x - b.min_x) / 2.0f;

        for (auto i = b.entities.size() - 1; i >= 0; i--)
        {
            auto current = b.entities[i];
            b.entities.erase(b.entities.begin() + i);
            add_entity(b, b.entities[i]);
        }
    }

    // NOT DONE
    void move_entity(Branch& b, physics::Entity* e, glm::vec2 old_position)
    {
        Branch *current = &b, *parent = &b;
        while (true)
        {
            if (is_in_branch(*current->top_left, e, old_position))
            {
                current = current->top_left;
            }
            else if (is_in_branch(*current->top_right, e, old_position))
            {
                current = current->top_right;
            }
            else if (is_in_branch(*current->bot_left, e, old_position))
            {
                current = current->bot_left;
            }
            else if (is_in_branch(*current->bot_right, e, old_position))
            {
                current = current->bot_right;
            }
        }
    }

    std::vector<physics::Entity*> get_collidable(Branch b, physics::Entity e)
    {
        // hh;
        // hh;
    }
}  // namespace collision_tree
