#pragma once

#include "TileSheet.h"

class Renderable
{
  private:
    class aframe
    {
        unsigned int frame_index;
        aframe*      next_frame;
    };

  public:
    // TODO: shader_ptr<TileSheet>;
    TileSheet    tile_sheet;
    unsigned int current_tile_index = 0;
    glm::vec2    position;
    glm::vec2    size;
    float        degrees_rotation = 0.0f;
    float        scale            = 1.0f;

    aframe* current_frame;
};
