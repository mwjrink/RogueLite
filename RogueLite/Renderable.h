#pragma once

#include <GL/gl3w.h>
#include <glm/glm.hpp>

#include "TileSheet.h"

class Renderable
{
  public:
    TileSheet Tile_Sheet;
    glm::vec2 position;
    glm::vec2 size;
    float     degrees_rotation;
    float     scale;
};