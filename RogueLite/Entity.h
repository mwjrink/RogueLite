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
    class Entity : Renderable
    {
        glm::vec3       velocity;
        float           mass;
        Collision_Index collision_index;
        glm::vec3       world_space_position;
        bool*           collision_map;
        unsigned int    collision_map_width, collision_map_height;
    };

    void move(Entity e, glm::vec3 new_position);

    // TODO: pass in quad tree manager or move this to there
    bool check_entity_collisions(Entity e, glm::vec3 new_position, std::vector<Entity> entities);

    bool check_tile_collisions(Entity e, glm::vec3 new_position, unsigned int* collision_map);

}  // namespace physics
