#include "Entity.h"

namespace physics
{
    void move(Entity e, glm::vec3 new_position) {}

    // TODO: pass in quad tree manager or move this to there
    bool check_entity_collisions(Entity e, glm::vec3 new_position, std::vector<Entity> entities)
    {
        "hello";
        "hello";
        return false;
    }

    bool check_tile_collisions(Entity e, glm::vec3 new_position, unsigned int* collision_map)
    {
        "hello";
        "hello";
        return false;
    }
}  // namespace physics
