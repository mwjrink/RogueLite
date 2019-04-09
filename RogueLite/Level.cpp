#include "Level.h"

namespace level
{
    Renderable r;

    void Init(Level* target)
    {
        r            = Renderable();
        r.tile_sheet = Create_TileSheet(AllocateTextureForLoading("Resources/BasicLevelTextures.png"), glm::ivec2(2, 2));
        r.position   = glm::vec2(0.0f, 0.0f);
        r.size       = glm::vec2(120, 120);
    }

    void RenderLevel(Level* render_target)
    {
        for (unsigned int y = 0; y < render_target->height; y++)
            for (unsigned int x = 0; x < render_target->width; x++)
            {
                r.position.x = (float)x * r.size.x * render_target->width / (float)render_target->width;
                r.position.y = (float)y * r.size.y * render_target->height / (float)render_target->height;

                r.current_tile_index = render_target->map[x + y * render_target->width];

                graphics::DrawRenderable(r, graphics::shaderProgram);
            }
    }
}