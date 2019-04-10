#pragma once

#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include <stdio.h>
#include <fstream>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#include "GLTexture.h"
#include "Renderable.h"
#include "TileSheet.h"
#include "WindowCallbacks.h"

namespace graphics
{
    extern GLFWwindow* window;

    extern unsigned int Window_Width, Window_Height;

    extern GLuint       VAO, VBO, EBO;
    extern GLuint       buffers[3];
    extern unsigned int shaderProgram;

    extern std::vector<glm::mat4> modelMatrices;
    extern std::vector<glm::vec3> spriteColors;
    extern std::vector<glm::vec4> textureUvs;

	// unsigned int batch_texture_id;

    void DrawRenderable(Renderable r, unsigned int shader_program);
    void SetViewMatrix(glm::mat4 view);

	void SetProjectionMatrix();
    bool GL_Init();
    bool GLFW_Init(int w_width, int w_height);
    bool Shader_Init();
    void Sprite_Render_Init();
    bool Init(int w_width, int w_height);
    void DrawSprite(GLuint shader_program, glm::vec2 position, glm::vec2 size, GLfloat rotate, GLfloat scale,
                    glm::vec3 color, glm::vec4 uvs);
    void DrawBatch();
    void Cleanup();
}  // namespace graphics
