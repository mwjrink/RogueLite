#pragma once

#include "TileSheet.h"

struct Renderable
{
  public:
    struct aframe
    {
        unsigned int frame_index;
        aframe*      next_frame   = nullptr;
        float        current_time = 0.5f;
        float        max_time     = 0.5f;

        aframe(unsigned int i) : frame_index(i) {}
        aframe(unsigned int i, float m) : frame_index(i), current_time(m), max_time(m) {}
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

void update_animations(Renderable& r, float dt);
