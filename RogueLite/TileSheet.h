#pragma once

#include <GL/gl3w.h>
#include <glm/glm.hpp>

struct GLTexture
{
    GLuint id;
    int    width;
    int    height;
};

class TileSheet
{
  public:
    void init(const GLTexture& texture, const glm::ivec2& tileDims)
    {
        this->texture = texture;
        this->dims    = tileDims;
    }

    glm::ivec4 getUVs(int index) { 
		int xTile = index % dims.x;
        int yTile = index / dims.x;

		glm::vec4 uvs;
        uvs.x = xTile / (float)dims.x;
        uvs.y = yTile / (float)dims.y;
        uvs.z = 1.0f / (float)dims.x;
        uvs.w = 1.0f / (float)dims.y;
	}

    GLTexture  texture;
    glm::ivec2 dims;
};