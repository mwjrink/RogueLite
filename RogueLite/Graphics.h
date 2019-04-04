#pragma once

#include <GLFW/glfw3.h>
#include <stdio.h>
#include <GL/../../src/gl3w.c>
#include <fstream>
#include <iostream>

#include "WindowCallbacks.h"

#define ALL_BUFFERS GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT

GLFWwindow*  window;

unsigned int shaderProgram;
unsigned int VAO;

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

    return true;
}

bool Init(int w_width, int w_height)
{
    if (!GLFW_Init(w_width, w_height)) return false;
    if (!GL_Init()) return false;
    return true;
}

bool Shader_Init()
{
    //float        vertices[] = {-0.5f, -0.5f, 0.0f, 0.5f, -0.5f, 0.0f, 0.0f, 0.5f, 0.0f};
    unsigned int VBO;
    glGenBuffers(1, &VBO);
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    //glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);

    /*
    GL_STATIC_DRAW : the data will most likely not change at all or very rarely.
    GL_DYNAMIC_DRAW : the data is likely to change a lot.
    GL_STREAM_DRAW : the data will change every time it is drawn.
    */

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
    }

    glUseProgram(shaderProgram);
    glDeleteShader(vertexShader);
    glDeleteShader(fragmentShader);

    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);

    glGenVertexArrays(1, &VAO);


	float vertices2[] = {
        0.5f,  0.5f,  0.0f,  // top right
        0.5f,  -0.5f, 0.0f,  // bottom right
        -0.5f, -0.5f, 0.0f,  // bottom left
        -0.5f, 0.5f,  0.0f   // top left
    };
    unsigned int indices[] = {
        // note that we start from 0!
        0, 1, 3,  // first triangle
        1, 2, 3   // second triangle
    };  

	unsigned int EBO;
    glGenBuffers(1, &EBO);
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW); 
	glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

    // ..:: Initialization code (done once (unless your object frequently changes)) :: ..
    // 1. bind Vertex Array Object
    glBindVertexArray(VAO);
    // 2. copy our vertices array in a buffer for OpenGL to use
    glBindBuffer(GL_ARRAY_BUFFER, VBO);
    glBufferData(GL_ARRAY_BUFFER, sizeof(vertices2), vertices2, GL_STATIC_DRAW);
    // 3. copy our index array in a element buffer for OpenGL to use
    glBindBuffer(GL_ELEMENT_ARRAY_BUFFER, EBO);
    glBufferData(GL_ELEMENT_ARRAY_BUFFER, sizeof(indices), indices, GL_STATIC_DRAW);
    // 4. then set the vertex attributes pointers
    glVertexAttribPointer(0, 3, GL_FLOAT, GL_FALSE, 3 * sizeof(float), (void*)0);
    glEnableVertexAttribArray(0);  

    // ..:: Drawing code (in render loop) :: ..
    // 4. draw the object

	//glUseProgram(shaderProgram);
 //   glBindVertexArray(VAO);
 //   glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);
 //   glBindVertexArray(0);
	
	return true;
}
