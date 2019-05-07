#include "World.h"

namespace world
{
    player::Player    player;
    level::Level      current_level;
    unsigned int      width, height;
    quad_tree::LGrid* collision_tree;

    void Update(float dt) {}

    void Render() { level::RenderLevel(&current_level); }

    void UpdateCurrentLevel(const level::Level& level)
    {
        world::width  = level.width * 64;
        world::height = level.height * 64;

        if (world::collision_tree) delete world::collision_tree;

        world::collision_tree = quad_tree::lgrid_create(world::width, world::height, 0, 0, world::width, world::height);
        // quad_tree::add_entity(*world::collision_tree, &world::player);
        quad_tree::lgrid_insert(world::collision_tree, 0, world::player.position.x, world::player.position.y,
                                world::player.bounding_box_width, world::player.bounding_box_height);
    }

}  // namespace world
