#include "World.h"

namespace world
{
    player::Player     player;
    level::Level       current_level;
    float              width, height;
    quad_tree::Branch* collision_tree;

    void Update(float dt) {}

    void Render() { level::RenderLevel(&current_level); }

}  // namespace world