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
        // dsagfd
        return false;
    }

	void move(Entity e, float dt)
    {
        e.velocity = glm::normalize(e.velocity);
        e.position += e.velocity * dt;
    }

    void increment_velocity_up(Entity e) { e.velocity.y++; }
    void increment_velocity_down(Entity e) { e.velocity.y--; }
    void increment_velocity_left(Entity e) { e.velocity.x--; }
    void increment_velocity_right(Entity e) { e.velocity.x++; }
}  // namespace physics
