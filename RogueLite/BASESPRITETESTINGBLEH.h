#pragma once

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "Renderable.h"

Renderable r;

auto INIT_TEST_SPRITE()
{
    r.Tile_Sheet = Create_TileSheet(LoadTexture("Resources/TestSprite.png", true), glm::ivec2(4, 4));
    r.position   = glm::vec2(960-240, 540-135);
    r.size       = glm::vec2(480, 270);
    r.scale      = 1.0f;
}