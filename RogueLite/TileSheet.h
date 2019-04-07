#pragma once

#include <GL/gl3w.h>
#include <glm/glm.hpp>

#include "GLTexture.h"

class TileSheet
{
  public:
    GLTexture  texture;
    glm::ivec2 sprite_dimensions;
};

TileSheet Create_TileSheet(const GLTexture& texture, const glm::ivec2& tileDims);

glm::vec4 getUVs(TileSheet sheet, int index);
