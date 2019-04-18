#pragma once

#include <glad/glad.h>
#include <vector>

#include "Graphics.h"
#include "TileSheet.h"

class TileSheet;

namespace level
{
    class Level
    {
      public:
        TileSheet*    tile_sheet;
        unsigned int* map;  // int[,,] or int[][][]
        unsigned int  width, height, layers;
    };

    void Init(Level* target);
    void RenderLevel(Level* render_target);

    // 0 = water;
    // 1 = lava;
    // 2 = grass;
    // 3 = earth / stone;

    Level Load_Level(std::string file_path);
}  // namespace level
