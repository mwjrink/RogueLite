#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include <vector>

#include "Renderable.h"

namespace physics
{
    // BITWISE
    enum Collision_Index
    {
        Physical    = 1 << 0,
        Underground = 1 << 1,
        Above       = 1 << 2,
        Corporeal   = 1 << 3
    };

    /// Physics Logic
    struct Entity : public Renderable
    {
        glm::vec2       velocity;
        float           mass;
        Collision_Index collision_index;
        glm::vec3       world_space_position;
        bool*           collision_map;
        unsigned int    collision_map_width, collision_map_height;
        unsigned int    bounding_box_width, bounding_box_height;
    };

    // TODO: pass in quad tree manager or move this to there
    bool check_entity_collisions(Entity& e, glm::vec3 new_position, std::vector<Entity> entities);

    bool check_tile_collisions(Entity& e, glm::vec3 new_position, unsigned int* collision_map);

    void increment_velocity_up(Entity& e);
    void increment_velocity_down(Entity& e);
    void increment_velocity_left(Entity& e);
    void increment_velocity_right(Entity& e);
}  // namespace physics
