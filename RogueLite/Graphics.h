#pragma once

#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#include <GL/glcorearb.h>
#include <GL/src/gl3w.c>
#endif

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

#define ALL_BUFFERS GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT

namespace graphics
{
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

            fprintf(stdout, "ERROR::SHADER::VERTEX::COMPILATION_FAILED\n0x%x\n", infoLog);
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
        /*
        GL_STATIC_DRAW : the data will most likely not change at all or very rarely.
        GL_DYNAMIC_DRAW : the data is likely to change a lot.
        GL_STREAM_DRAW : the data will change every time it is drawn.
        */

        // THIS MAKES OBJECTS ORIGIN THE BOTTOM LEFT CORNER OF THE OBJECT
        // GLfloat vertices[] = {
        //    1.0f, 1.0f, 0.0f,  // top right
        //    1.0f, 0.0f, 0.0f,  // bottom right
        //    0.0f, 0.0f, 0.0f,  // bottom left
        //    0.0f, 1.0f, 0.0f   // top left
        //};

        float vertices[] = {
            1.0f, 1.0f, 0.0f, /*Texture*/ 1.0f, 0.0f,  // top right
            1.0f, 0.0f, 0.0f, /*Texture*/ 1.0f, 1.0f,  // bottom right
            0.0f, 0.0f, 0.0f, /*Texture*/ 0.0f, 1.0f,  // bottom left
            0.0f, 1.0f, 0.0f, /*Texture*/ 0.0f, 0.0f   // top left
        };

        unsigned int indices[] = {
            0, 1, 3,  // first triangle
            1, 2, 3   // second triangle
        };

        glGenVertexArrays(1, &VAO);
        glGenBuffers(1, &VBO);
        glGenBuffers(1, &EBO);
        // bind the Vertex Array Object first, then bind and set vertex buffer(s), and then configure vertex attributes(s).
        glBindVertexArray(VAO);

        glBindBuffer(GL_ARRAY_BUFFER, VBO);
        glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

        glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
        glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)0);
        glEnableVertexAttribArray(0);
        // texture coord attribute
        glVertexAttribPointer(1, 2, GL_FLOAT, GL_FALSE, 5 * sizeof(float), (void*)(3 * sizeof(float)));
        glEnableVertexAttribArray(1);

        // note that this is allowed, the call to glVertexAttribPointer registered VBO as the vertex attribute's bound vertex
        // buffer object so afterwards we can safely unbind
        glBindBuffer(GL_ARRAY_BUFFER, 0);

        // remember: do NOT unbind the EBO while a VAO is active as the bound element buffer object IS stored in the VAO;
        // keep the EBO bound. glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, 0);

        // You can unbind the VAO afterwards so other VAO calls won't accidentally modify this VAO, but this rarely happens.
        // Modifying other VAOs requires a call to glBindVertexArray anyways so we generally don't unbind VAOs (nor VBOs)
        // when it's not directly necessary.
        glBindVertexArray(0);

        // glGenBuffers(1, &EBO);
        // glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
        // glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        //// glGenVertexArrays(1, &VAO);
        //// glGenBuffers(1, &VBO);

        //// glBindBuffer(GL_ARRAY_BUFFER, VBO);
        //// glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

        //// glBindVertexArray(VAO);
        //// glEnableVertexAttribArray(0);
        //// glVertexAttribPointer(0, 4, GL_FLOAT, GL_FALSE, 4 * sizeof(GLfloat), (GLvoid*)0);
        //// glBindBuffer(GL_ARRAY_BUFFER, 0);
        //// glBindVertexArray(0);

        // glBindVertexArray(VAO);
        // glBindBuffer(GL_ARRAY_BUFFER, VBO);
        // glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

        // glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
        // glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);

        // glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
        // glEnableVertexAttribArray(0);

        glm::mat4 projection =
            glm::ortho(0.0f, static_cast<GLfloat>(Window_Width), 0.0f, static_cast<GLfloat>(Window_Height), -1.0f, 1.0f);

        glUseProgram(shaderProgram);
        glUniform1i(glGetUniformLocation(shaderProgram, "image"), 0);
        glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "projection"), 1, GL_FALSE, glm::value_ptr(projection));

        // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
        // glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

        glEnable(GL_BLEND);
        glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
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
                    GLfloat rotate = 0.0f, GLfloat scale = 1.0f, glm::vec3 color = glm::vec3(1.0f),
                    glm::vec4 uvs = glm::vec4(0.0f, 1.0f, 0.0f, 1.0f))
    {
        // Prepare transformations
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

        glUniform4f(glGetUniformLocation(shader_program, "texture_uvs"), uvs.x, uvs.y, uvs.z, uvs.w);

        glActiveTexture(GL_TEXTURE0);
        glBindTexture(GL_TEXTURE_2D, texture);

        // glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);

        glUseProgram(shader_program);
        glBindVertexArray(VAO);
        glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        // glBindVertexArray(VAO);
        // glDrawArrays(GL_TRIANGLES, 0, 6);

        // TODO: change to draw elements with indices, it is more efficient, most of the time (only for overlapping vertices)
        // glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
    }

    void DrawRenderable(Renderable r, unsigned int shader_program)
    {
        DrawSprite(shader_program, r.tile_sheet.texture.id, r.position, r.size, r.degrees_rotation, r.scale, glm::vec3(1.0f),
                   getUVs(r.tile_sheet, r.current_tile_index));
    }

	void SetViewMatrix(glm::mat4 view)
	{
        glUniformMatrix4fv(glGetUniformLocation(shaderProgram, "view"), 1, GL_FALSE, glm::value_ptr(view));
	}

    void Cleanup()
    {
        glDeleteVertexArrays(1, &VAO);
        glDeleteBuffers(1, &VBO);
        glDeleteBuffers(1, &EBO);
    }
}  // namespace graphics
