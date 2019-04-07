#pragma once

#include <GL/gl3w.h>
#include <string>

struct GLTexture
{
    GLuint id;
    int    width;
    int    height;
};

GLTexture LoadTexture(std::string texture_path, bool flip_vertically);
