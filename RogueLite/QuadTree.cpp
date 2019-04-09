#include "QuadTree.h"

namespace quad_tree
{
    Branch Create_Tree(float width, float height)
    {
        auto b  = Branch();
        b.min_x = 0.0f;
        b.min_y = 0.0f;
        b.max_x = width;
        b.max_y = height;
        return b;
    }

    void add_entity(Branch& b, physics::Entity* e)
    {
        if (!b.split)
            if (b.entities.size() == entity_threshold)
                split(b);
            else
                return b.entities.push_back(e);

        if (b.top_left && is_in_branch(*b.top_left, e))
            add_entity(*b.top_left, e);
        else if (b.top_right && is_in_branch(*b.top_right, e))
            add_entity(*b.top_right, e);
        else if (b.bot_left && is_in_branch(*b.bot_left, e))
            add_entity(*b.bot_left, e);
        else if (b.bot_right && is_in_branch(*b.bot_right, e))
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

    void move_entity(Branch& b, physics::Entity* e, glm::vec2 old_position)
    {
        Branch *current = &b, *parent = &b;
        while (true)
        {
            if (b.split)
            {
                if (current->top_left && is_in_branch(*current->top_left, e, old_position))
                {
                    parent  = current;
                    current = current->top_left;
                    continue;
                }
                else if (current->top_right && is_in_branch(*current->top_right, e, old_position))
                {
                    parent  = current;
                    current = current->top_right;
                    continue;
                }
                else if (current->bot_left && is_in_branch(*current->bot_left, e, old_position))
                {
                    parent  = current;
                    current = current->bot_left;
                    continue;
                }
                else if (current->bot_right && is_in_branch(*current->bot_right, e, old_position))
                {
                    parent  = current;
                    current = current->bot_right;
                    continue;
                }
            }

            break;
        }

        if (parent == current) return;

        if (is_in_branch(b, e)) return;

        std::remove(current->entities.begin(), current->entities.end(), e);

        if (b.split)
        {
            if (b.top_left && is_in_branch(*b.top_left, e))
                add_entity(*b.top_left, e);
            else if (b.top_right && is_in_branch(*b.top_right, e))
                add_entity(*b.top_right, e);
            else if (b.bot_left && is_in_branch(*b.bot_left, e))
                add_entity(*b.bot_left, e);
            else if (b.bot_right && is_in_branch(*b.bot_right, e))
                add_entity(*b.bot_right, e);
            else
                b.entities.push_back(e);
        }
        else
            b.entities.push_back(e);
    }

    std::vector<physics::Entity*> get_collidable(Branch& b, physics::Entity* e)
    {
        if (b.split)
        {
            if (b.top_left && is_in_branch(*b.top_left, e))
            {
                auto result = get_collidable(*b.top_left, e);
                result.insert(result.end(), b.entities.begin(), b.entities.end());
                return result;
            }
            else if (b.top_right && is_in_branch(*b.top_right, e))
            {
                auto result = get_collidable(*b.top_right, e);
                result.insert(result.end(), b.entities.begin(), b.entities.end());
                return result;
            }
            else if (b.bot_left && is_in_branch(*b.bot_left, e))
            {
                auto result = get_collidable(*b.bot_left, e);
                result.insert(result.end(), b.entities.begin(), b.entities.end());
                return result;
            }
            else if (b.bot_right && is_in_branch(*b.bot_right, e))
            {
                auto result = get_collidable(*b.bot_right, e);
                result.insert(result.end(), b.entities.begin(), b.entities.end());
                return result;
            }
        }

        return b.entities;
    }

    // TODO: remove function

    // std::vector<physics::Entity*> get_all(Branch& b)
    //{
    //    auto result = std::vector<physics::Entity*>();

    //    if (split)
    //    {
    //        if (b.top_left)
    //        {
    //            auto add = get_all(*b.top_left);
    //            result.insert(result.end(), add.begin(), add.end());
    //        }

    //        if (b.top_right)
    //        {
    //            auto add = get_all(*b.top_right);
    //            result.insert(result.end(), add.begin(), add.end());
    //        }

    //        if (b.bot_left)
    //        {
    //            auto add = get_all(*b.bot_left);
    //            result.insert(result.end(), add.begin(), add.end());
    //        }

    //        if (b.bot_right)
    //        {
    //            auto add = get_all(*b.bot_right);
    //            result.insert(result.end(), add.begin(), add.end());
    //        }
    //    }

    //    result.insert(result.end(), b.entities.begin(), b.entities.end());
    //    return result;
    //}
}  // namespace quad_tree
