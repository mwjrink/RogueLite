#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Renderable.h"

Renderable r;

auto INIT_TEST_SPRITE()
{
    r.Tile_Sheet = Create_TileSheet(LoadTexture("Resources/SpriteSheet.png", true), glm::ivec2(4, 4));
    // r.position   = glm::vec2(1720.0f, 980.0f);
    r.position = glm::vec2(100.0f, 100.0f);
    r.size     = glm::vec2(100.0f, 100.0f);
    r.scale    = 1.0f;
}
