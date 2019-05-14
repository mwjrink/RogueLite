#pragma once

#include "TileSheet.h"

struct Renderable
{
  public:
    // TODO: shader_ptr<TileSheet>;
    TileSheet    tile_sheet;
    unsigned int current_tile_index = 0;
    glm::vec2    position;
    glm::vec2    size;
    glm::vec3    color;
    float        degrees_rotation = 0.0f;
    float        scale            = 1.0f;
};
