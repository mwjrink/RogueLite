#pragma once

#include <GL/gl3w.h>
#include <glm/glm.hpp>

#include "GLTexture.h"

class TileSheet
{
  public:
    GLTexture  texture;
    glm::ivec2 dims;
};

TileSheet Create_TileSheet(const GLTexture& texture, const glm::ivec2& tileDims)
{
    auto sheet    = TileSheet();
    sheet.texture = texture;
    sheet.dims    = tileDims;
    return sheet;
}

glm::vec4 getUVs(TileSheet sheet, int index)
{
    int xTile = index % sheet.dims.x;
    int yTile = index / sheet.dims.x;

    glm::vec4 uvs;
    uvs.x = xTile / (float)sheet.dims.x;
    uvs.y = yTile / (float)sheet.dims.y;
    uvs.z = 1.0f / (float)sheet.dims.x;
    uvs.w = 1.0f / (float)sheet.dims.y;

    return uvs;
}
