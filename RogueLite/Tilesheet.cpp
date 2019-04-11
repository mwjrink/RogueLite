#include "TileSheet.h"

TileSheet Create_TileSheet(gltexture::GLTexture* texture, const glm::ivec2& tileDims)
{
    auto sheet              = TileSheet();
    sheet.texture           = texture;
    sheet.sprite_dimensions = tileDims;
    sheet.sprite_width      = sheet.texture->width / sheet.sprite_dimensions.x;
    sheet.sprite_height     = sheet.texture->height / sheet.sprite_dimensions.y;
    return sheet;
}

glm::vec4 getUVs(TileSheet sheet, int index)
{
    unsigned int xTile = index % sheet.sprite_dimensions.x;
    unsigned int yTile = index / sheet.sprite_dimensions.x;

    glm::vec4 uvs;
    uvs.x = (xTile * sheet.sprite_width + sheet.texture->atlas_x) / (float)sheet.texture->atlas_width;
    uvs.y = (yTile * sheet.sprite_height + sheet.texture->atlas_y) / (float)sheet.texture->atlas_height;

    uvs.z = (float)sheet.texture->width / (float)sheet.sprite_dimensions.x / (float)sheet.texture->atlas_width;
    uvs.w = (float)sheet.texture->height / (float)sheet.sprite_dimensions.y / (float)sheet.texture->atlas_height;

    return uvs;
}
