#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Renderable.h"

Renderable r;

auto INIT_TEST_SPRITE()
{
    r.Tile_Sheet = Create_TileSheet(LoadTexture("Resources/SpriteSheet.png", true), glm::ivec2(4, 4));
    r.position   = glm::vec2(0.0f, 0.0f);
    r.size       = glm::vec2(r.Tile_Sheet.texture.width, r.Tile_Sheet.texture.height);
}