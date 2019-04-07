#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Level.h"
#include "Renderable.h"
#include "World.h"

Renderable r;

auto INIT_TEST_SPRITE()
{
    r.tile_sheet = Create_TileSheet(LoadTexture("Resources/SpriteSheet.png", true), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
    r.position           = glm::vec2(100.0f, 100.0f);
    r.size               = glm::vec2(100.0f, 100.0f);
    r.scale              = 1.0f;
    r.current_tile_index = 0;

    world::current_level        = level::Level();
    world::current_level.map    = level::base_map;
    world::current_level.width  = 16;
    world::current_level.height = 9;
}
