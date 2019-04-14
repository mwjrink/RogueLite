#include "QuadTree.h"

namespace quad_tree
{
    Branch* Create_Tree(float width, float height)
    {
        auto b      = new Branch();
        b->min_x    = 0.0f;
        b->min_y    = 0.0f;
        b->max_x    = width;
        b->max_y    = height;
        b->split    = false;
        b->entities = std::vector<physics::Entity*>();
        return b;
    }

    void add_entity(Branch& b, physics::Entity* e)
    {
        if (!b.split)
            if (b.entities.size() >= entity_threshold)
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
        auto r = glm::length(glm::vec2(e->bounding_box_width * e->scale, e->bounding_box_height * e->scale));
        return (e->position.x + e->bounding_box_width / 2 + r < b.max_x &&
                e->position.x + e->bounding_box_width / 2 - r > b.min_x &&
                e->position.y + e->bounding_box_height / 2 + r < b.max_y &&
                e->position.y + e->bounding_box_width / 2 - r > b.min_y);
    }

    bool is_in_branch(Branch& b, physics::Entity* e, glm::vec2 old_position)
    {
        auto r = glm::length(glm::vec2(e->bounding_box_width * e->scale, e->bounding_box_height * e->scale));
        return (old_position.x + e->bounding_box_width / 2 + r < b.max_x &&
                old_position.x + e->bounding_box_width / 2 - r > b.min_x &&
                old_position.y + e->bounding_box_height / 2 + r < b.max_y &&
                old_position.y + e->bounding_box_width / 2 - r > b.min_y);
    }

    bool is_in_branch(Branch& b, physics::Entity* e, float old_scale)
    {
        auto r = glm::length(glm::vec2(e->bounding_box_width * old_scale, e->bounding_box_height * old_scale));
        return (e->position.x + e->bounding_box_width / 2 + r < b.max_x &&
                e->position.x + e->bounding_box_width / 2 - r > b.min_x &&
                e->position.y + e->bounding_box_height / 2 + r < b.max_y &&
                e->position.y + e->bounding_box_width / 2 - r > b.min_y);
    }

    // TODO: split smartly, if necessary
    void split(Branch& b)
    {
        b.top_left           = new Branch();
        b.top_left->max_y    = b.max_y;
        b.top_left->min_y    = (b.max_y - b.min_y) / 2.0f + b.min_y;
        b.top_left->max_x    = (b.max_x - b.min_x) / 2.0f + b.min_x;
        b.top_left->min_x    = b.min_x;
        b.top_left->entities = std::vector<physics::Entity*>();

        b.top_right           = new Branch();
        b.top_right->max_y    = b.max_y;
        b.top_right->min_y    = (b.max_y - b.min_y) / 2.0f + b.min_y;
        b.top_right->max_x    = b.max_x;
        b.top_right->min_x    = (b.max_x - b.min_x) / 2.0f + b.min_x;
        b.top_right->entities = std::vector<physics::Entity*>();

        b.bot_left           = new Branch();
        b.bot_left->max_y    = (b.max_y - b.min_y) / 2.0f + b.min_y;
        b.bot_left->min_y    = b.min_y;
        b.bot_left->max_x    = (b.max_x - b.min_x) / 2.0f + b.min_x;
        b.bot_left->min_x    = b.min_x;
        b.bot_left->entities = std::vector<physics::Entity*>();

        b.bot_right           = new Branch();
        b.bot_right->max_y    = (b.max_y - b.min_y) / 2.0f + b.min_y;
        b.bot_right->min_y    = b.min_y;
        b.bot_right->max_x    = b.max_x;
        b.bot_right->min_x    = (b.max_x - b.min_x) / 2.0f + b.min_x;
        b.bot_right->entities = std::vector<physics::Entity*>();

        b.split = true;

        for (unsigned int i = b.entities.size(); i > 0; i--)
        {
            auto current = b.entities[i - 1];
            b.entities.erase(b.entities.begin() + i - 1);
            add_entity(b, current);
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

        if (is_in_branch(*current, e)) return;

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

    void scale_entity(Branch& b, physics::Entity* e, float old_scale)
    {
        Branch *current = &b, *parent = &b;
        while (true)
        {
            if (b.split)
            {
                if (current->top_left && is_in_branch(*current->top_left, e, old_scale))
                {
                    parent  = current;
                    current = current->top_left;
                    continue;
                }
                else if (current->top_right && is_in_branch(*current->top_right, e, old_scale))
                {
                    parent  = current;
                    current = current->top_right;
                    continue;
                }
                else if (current->bot_left && is_in_branch(*current->bot_left, e, old_scale))
                {
                    parent  = current;
                    current = current->bot_left;
                    continue;
                }
                else if (current->bot_right && is_in_branch(*current->bot_right, e, old_scale))
                {
                    parent  = current;
                    current = current->bot_right;
                    continue;
                }
            }

            break;
        }

        if (parent == current) return;

        if (is_in_branch(*current, e)) return;

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

    void remove_entity(Branch& b, physics::Entity* e)
    {
        Branch *current = &b, *parent = &b;
        while (true)
        {
            if (b.split)
            {
                if (current->top_left && is_in_branch(*current->top_left, e))
                {
                    parent  = current;
                    current = current->top_left;
                    continue;
                }
                else if (current->top_right && is_in_branch(*current->top_right, e))
                {
                    parent  = current;
                    current = current->top_right;
                    continue;
                }
                else if (current->bot_left && is_in_branch(*current->bot_left, e))
                {
                    parent  = current;
                    current = current->bot_left;
                    continue;
                }
                else if (current->bot_right && is_in_branch(*current->bot_right, e))
                {
                    parent  = current;
                    current = current->bot_right;
                    continue;
                }
            }

            break;
        }

        std::remove(current->entities.begin(), current->entities.end(), e);

        if (parent == current) return;

        if (parent->split)
        {
            if (parent->top_left->entities.empty() && parent->top_right->entities.empty() &&
                parent->bot_left->entities.empty() && parent->bot_right->entities.empty())
            {
                parent->split = false;
                delete parent->top_left;
                parent->top_left = nullptr;
                delete parent->top_right;
                parent->top_right = nullptr;
                delete parent->bot_left;
                parent->bot_left = nullptr;
                delete parent->bot_right;
                parent->bot_right = nullptr;
            }
        }
    }

    std::vector<physics::Entity*> get_visible(Branch& b, const glm::vec4& viewport)
    {
        Branch* current = &b;
        while (true)
        {
            if (b.split)
            {
                if (current->top_left && viewport.z <= current->top_left->max_x && viewport.x >= current->top_left->min_x &&
                    viewport.w <= current->top_left->max_y && viewport.y >= current->top_left->min_y)
                {
                    current = current->top_left;
                    continue;
                }
                if (current->top_right && viewport.z <= current->top_right->max_x &&
                    viewport.x >= current->top_right->min_x && viewport.w <= current->top_right->max_y &&
                    viewport.y >= current->top_right->min_y)
                {
                    current = current->top_right;
                    continue;
                }
                if (current->bot_left && viewport.z <= current->bot_left->max_x && viewport.x >= current->bot_left->min_x &&
                    viewport.w <= current->bot_left->max_y && viewport.y >= current->bot_left->min_y)
                {
                    current = current->bot_left;
                    continue;
                }
                if (current->bot_right && viewport.z <= current->bot_right->max_x &&
                    viewport.x >= current->bot_right->min_x && viewport.w <= current->bot_right->max_y &&
                    viewport.y >= current->bot_right->min_y)
                {
                    current = current->bot_right;
                    continue;
                }
            }

            break;
        }

        auto result = std::vector<physics::Entity*>(b.entities);

        if (current->split)
        {
            if (current->top_left)
            {
                auto add = get_visible(*current->top_left, glm::vec4(viewport.x, current->top_left->min_y,
                                                                     current->top_left->max_x, viewport.w));
                result.insert(result.end(), add.begin(), add.end());
            }

            if (current->top_right)
            {
                auto add = get_visible(*current->top_right, glm::vec4(current->top_right->min_x, current->top_right->min_y,
                                                                      viewport.z, viewport.w));
                result.insert(result.end(), add.begin(), add.end());
            }

            if (current->bot_left)
            {
                auto add = get_visible(*current->bot_left, glm::vec4(viewport.x, viewport.y, current->bot_left->max_x,
                                                                     current->bot_left->max_y));
                result.insert(result.end(), add.begin(), add.end());
            }

            if (current->bot_right)
            {
                auto add = get_visible(*current->bot_right, glm::vec4(current->bot_right->min_x, viewport.y,
                                                                      current->bot_right->max_y, viewport.z));
                result.insert(result.end(), add.begin(), add.end());
            }
        }

        return result;
    }
}  // namespace quad_tree
