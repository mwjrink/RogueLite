#include "Creature.h"

namespace creature
{
    void move(Creature& c, float dt)
    {
        c.velocity = glm::normalize(c.velocity);
        c.position += c.velocity * c.speed * dt;
    }

    void increment_velocity_up(Creature& c) { c.velocity.y++; }
    void increment_velocity_down(Creature& c) { c.velocity.y--; }
    void increment_velocity_left(Creature& c) { c.velocity.x--; }
    void increment_velocity_right(Creature& c) { c.velocity.x++; }
}  // namespace physics
