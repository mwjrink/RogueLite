#pragma once

#include <vector>
#include "Graphics.h"
#include "TileSheet.h"

namespace level
{
    class Level
    {
      public:
        TileSheet*    tile_sheet;
        unsigned int* map;  // int[,] or int[][]
        unsigned int  width, height;
    };

    // renderable used to draw the tiles to the screen
    Renderable r;

    void Init(Level* target)
    {
        r            = Renderable();
        r.tile_sheet = Create_TileSheet(LoadTexture("Resources/BasicLevelTextures.png", false), glm::ivec2(2, 2));
        r.position   = glm::vec2(0.0f, 0.0f);
        r.size       = glm::vec2(1920.0f / 16.0f, 1080.0f / 9.0f);
    }

    void RenderLevel(Level* render_target)
    {
        for (unsigned int y = 0; y < render_target->height; y++)
            for (unsigned int x = 0; x < render_target->width; x++)
            {
                r.position.x = (float)x * 1920.0f / (float)render_target->width;
                r.position.y = (float)y * 1080.0f / (float)render_target->height;

                r.current_tile_index = render_target->map[x + y * render_target->width];

                graphics::DrawRenderable(r, graphics::shaderProgram);
            }
    }

    unsigned int         base_map_width  = 10;
    unsigned int         base_map_height = 10;
    static unsigned int* base_map        = new unsigned int[16 * 9]{
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,  //..................................................
        3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,  //..................................................
        3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,  //..................................................
        3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,  //..................................................
        3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,  //..................................................
        3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,  //..................................................
        3, 0, 0, 0, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 3,  //..................................................
        3, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 3,  //..................................................
        3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3,  //..................................................
    };

    // 0 = water;
    // 1 = lava;
    // 2 = grass;
    // 3 = earth / stone;

    static unsigned int* collision_map = new unsigned int[16 * 9]{
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1,  //..................................................
        1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1,  //..................................................
    };
}  // namespace level
