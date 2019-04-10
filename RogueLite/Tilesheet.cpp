#include "TileSheet.h"

TileSheet Create_TileSheet(gltexture::GLTexture* texture, const glm::ivec2& tileDims)
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
    uvs.x = ((float)xTile * (float)sheet.texture->width / (float)sheet.sprite_dimensions.x + (float)sheet.texture->atlas_x) /
            (float)sheet.texture->atlas_width;
    uvs.y =
        ((float)yTile * (float)sheet.texture->height / (float)sheet.sprite_dimensions.y + (float)sheet.texture->atlas_y) /
        (float)sheet.texture->atlas_height;
    uvs.z = (float)sheet.texture->width / (float)sheet.sprite_dimensions.x / (float)sheet.texture->atlas_width;
    uvs.w = (float)sheet.texture->height / (float)sheet.sprite_dimensions.y / (float)sheet.texture->atlas_height;

    return uvs;
}
