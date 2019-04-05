#pragma once

#include <GLFW/glfw3.h>
#include <stdio.h>
#include <GL/../../src/gl3w.c>
#include <fstream>
#include <iostream>

#include "GLTexture.h"
#include "Renderable.h"
#include "WindowCallbacks.h"

#define ALL_BUFFERS GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT

GLFWwindow* window;

unsigned int Window_Width, Window_Height;

GLuint       VAO, VBO, EBO;
unsigned int shaderProgram;

bool GL_Init()
{
    unsigned int fbo = 0;

    // glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    auto errors = glGetError();
    auto status = glCheckFramebufferStatus(GL_FRAMEBUFFER);
    if (status != GL_FRAMEBUFFER_COMPLETE)
    {
        fprintf(stderr, "glCheckFramebufferStatus error 0x%x\n", status);
        return false;
    }

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
    glBindFramebuffer(GL_READ_FRAMEBUFFER, fbo);
    // glBindFramebuffer(GL_FRAMEBUFFER, 0);

    if (errors != GL_NO_ERROR)
    {
        fprintf(stderr, "glGetError returned 0x%x\n", errors);
        return false;
    }

    return true;
}

bool GLFW_Init(int w_width, int w_height)
{
    if (!glfwInit())
    {
        fprintf(stderr, "glfwInit() failed.\n");
        return false;
    }

    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 6);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_RESIZABLE, GL_FALSE);
    glfwWindowHint(GLFW_FOCUSED, GL_TRUE);
    glfwWindowHint(GLFW_DOUBLEBUFFER, GL_TRUE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);  // uncomment this statement to fix compilation on OS X
#endif

    window = glfwCreateWindow(w_width, w_height, "Hello World!", nullptr, nullptr);
    if (!window)
    {
        fprintf(stderr, "glfwCreateWindow() failed.\n");
        glfwTerminate();
        return false;
    }

    glfwMakeContextCurrent(window);
    glfwGetFramebufferSize(window, &w_width, &w_height);

    if (gl3wInit())
    {
        fprintf(stderr, "gl3wInit() failed.\n");
        return false;
    }

    if (!gl3wIsSupported(4, 6))
    {
        fprintf(stderr, "Opengl 4.6 not supported.\n");
        return false;
    }

    printf("OpenGL %s, GLSL %s\n", glGetString(GL_VERSION), glGetString(GL_SHADING_LANGUAGE_VERSION));

    glfwSetKeyCallback(window, KeyCallback);
    glfwSetMouseButtonCallback(window, MouseButtonCallback);
    glfwSetCursorPosCallback(window, MouseMoveCallback);
    glfwSetFramebufferSizeCallback(window, FramebufferSizeCallback);

    glViewport(0, 0, w_width, w_height);

    Window_Width  = w_width;
    Window_Height = w_height;

    return true;
}

bool Shader_Init()
{
    unsigned int vertexShader;
    vertexShader = glCreateShader(GL_VERTEX_SHADER);

    std::ifstream program_file("VertexShader.glsl");
    std::string   vertex_src(std::istreambuf_iterator<char>(program_file), (std::istreambuf_iterator<char>()));
    program_file.close();

    std::ifstream program_file2("FragmentShader.glsl");
    std::string   fragment_src(std::istreambuf_iterator<char>(program_file2), (std::istreambuf_iterator<char>()));
    program_file.close();

    auto vertex_gl_src   = vertex_src.c_str();
    auto fragment_gl_src = fragment_src.c_str();

    glShaderSource(vertexShader, 1, &vertex_gl_src, NULL);
    glCompileShader(vertexShader);

    int  success;
    char infoLog[512];
    glGetShaderiv(vertexShader, GL_COMPILE_STATUS, &success);

    if (!success)
    {
        glGetShaderInfoLog(vertexShader, 512, NULL, infoLog);
        std::cout << "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n" << infoLog << std::endl;
        // return false;
    }

    unsigned int fragmentShader;
    fragmentShader = glCreateShader(GL_FRAGMENT_SHADER);
    glShaderSource(fragmentShader, 1, &fragment_gl_src, NULL);
    glCompileShader(fragmentShader);

    shaderProgram = glCreateProgram();

    glAttachShader(shaderProgram, vertexShader);
    glAttachShader(shaderProgram, fragmentShader);
    glLinkProgram(shaderProgram);

    glGetProgramiv(shaderProgram, GL_LINK_STATUS, &success);
    if (!success)
    {
        glGetProgramInfoLog(shaderProgram, 512, NULL, infoLog);
        //...
        // BLEH
        // return false;
    }

    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    return true;
}

void Sprite_Render_Init()
{
    // glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    /*
    GL_STATIC_DRAW : the data will most likely not change at all or very rarely.
    GL_DYNAMIC_DRAW : the data is likely to change a lot.
    GL_STREAM_DRAW : the data will change every time it is drawn.
    */

    // Initialize Shaders

    GLfloat vertices[] = {0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 0.0f, 0.0f,
                          0.0f, 1.0f, 0.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 1.0f, 0.0f, 1.0f, 0.0f};

    glGenVertexArrays(1, &VAO);
    glGenBuffers(1, &VBO);

    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    glBindVertexArray(VAO);
    glEnableVertexAttribArray(0);
    glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), (GLvoid*)0);
    glBindBuffer(GL_ARRAY_BUFFER, 0);
    glBindVertexArray(0);

    glm::mat4 projection =
        glm::ortho(0.0f, static_cast<GLfloat>(Window_Width), 0.0f, static_cast<GLfloat>(Window_Height), -1.0f, 1.0f);

    glUseProgram(shaderProgram);
    glUniform1i(glGetUniformLocation(shaderProgram, "image"), 0);
    glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, GL_FALSE, glm::value_ptr(projection));
}

bool Init(int w_width, int w_height)
{
    if (!GLFW_Init(w_width, w_height)) return false;
    if (!GL_Init()) return false;
    if (!Shader_Init()) return false;
    Sprite_Render_Init();
    return true;
}

void DrawSprite(GLuint shader_program, unsigned int texture, glm::vec2 position, glm::vec2 size = glm::vec2(10, 10),
                GLfloat rotate = 0.0f, GLfloat scale = 1.0f, glm::vec3 color = glm::vec3(1.0f))
{
    // Prepare transformations
    glUseProgram(shader_program);

    glm::mat4 model = glm::mat4(1.0f);
    model           = glm::translate(model, glm::vec3(position, 0.0f));

    if ((fmod(rotate, 360)) != 0.0f && scale != 1.0f)
    {
        model = glm::translate(model, glm::vec3(0.5f * size.x, 0.5f * size.y, 0.0f));
        if ((fmod(rotate, 360)) != 0.0f) model = glm::rotate(model, glm::radians(rotate), glm::vec3(0.0f, 0.0f, 1.0f));
        if (scale != 1.0f) model = glm::scale(model, glm::vec3(scale, scale, scale));  // Last scale
        model = glm::translate(model, glm::vec3(-0.5f * size.x, -0.5f * size.y, 0.0f));
    }

    model = glm::scale(model, glm::vec3(size, 1.0f));  // Last scale

    glUniformMatrix4fv(glGetUniformLocation(shader_program, "model"), 1, GL_FALSE, glm::value_ptr(model));

    // Render textured quad
    glUniform3f(glGetUniformLocation(shader_program, "spriteColor"), color.x, color.y, color.z);

    glActiveTexture(GL_TEXTURE0);
    glBindTexture(GL_TEXTURE_2D, texture);

    glBindVertexArray(VAO);
    glDrawArrays(GL_TRIANGLES, 0, 6);
    glBindVertexArray(0);

     glEnable(GL_BLEND);
     glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);

    // TODO: change to draw elements with indices, it is more efficient, most of the time (only for overlapping vertices)
    // glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
}

void DrawRenderable(Renderable r, unsigned int shader_program)
{
    DrawSprite(shader_program, r.Tile_Sheet.texture.id, r.position, r.size, r.degrees_rotation, r.scale, glm::vec3(1.0f));
}