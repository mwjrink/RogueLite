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

TileSheet Create_TileSheet(const GLTexture& texture, const glm::ivec2& tileDims)
{
    auto sheet              = TileSheet();
    sheet.texture           = texture;
    sheet.sprite_dimensions = tileDims;
    return sheet;
}

glm::vec4 getUVs(TileSheet sheet, int index)
{
    int xTile = index % sheet.sprite_dimensions.x;
    int yTile = index / sheet.sprite_dimensions.x;

    glm::vec4 uvs;
    uvs.x = xTile / (float)sheet.sprite_dimensions.x;
    uvs.y = yTile / (float)sheet.sprite_dimensions.y;
    uvs.z = 1.0f / (float)sheet.sprite_dimensions.x;
    uvs.w = 1.0f / (float)sheet.sprite_dimensions.y;

    return uvs;
}
