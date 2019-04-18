#include "World.h"

namespace world
{
    player::Player     player;
    level::Level       current_level;
    float              width, height;
    quad_tree::Branch* collision_tree;

    void Update(float dt) {}

    void Render() { level::RenderLevel(&current_level); }

    void UpdateCurrentLevel(const level::Level& level)
    {
        world::width  = level.width * 64;
        world::height = level.height * 64;

        if (world::collision_tree) delete world::collision_tree;

        world::collision_tree = quad_tree::Create_Tree(world::width, world::height);
        quad_tree::add_entity(*world::collision_tree, &world::player);
    }

}  // namespace world
