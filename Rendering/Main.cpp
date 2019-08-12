#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define STB_IMAGE_IMPLEMENTATION

#include "stb_image.h"

#include "creature.h"
#include "model.h"
#include "shader.h"

#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void processInput(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods);
void change_pixelation_factor(int new_value);
void render();
void update(float dt);

// settings
unsigned int scr_width         = 1920;
unsigned int scr_height        = 1080;
unsigned int pixelation_factor = 1;  // for testing the animations, this is gonna be 1

GLFWwindow* window;

// camera
// Camera camera();
//glm::mat4 view =
//    glm::lookAt(glm::vec3(-10.0f, 0.0f, 10.0f), glm::vec3(-10.0f, 0.0f, 10.0f) + glm::vec3(0.707107, 0, -0.707107),
//                glm::vec3(1.0f, 0.0f, 1.0f));
glm::mat4 view =
    glm::lookAt(glm::vec3(0.0f, -10.0f, 10.0f), glm::vec3(0.0f, -10.0f, 10.0f) + glm::vec3(0.0f, 1.0f, -1.0f),
                glm::vec3(0.0f, 1.0f, 1.0f));
glm::mat4 projection = glm::perspective(glm::radians(45.0f), (float)scr_width / (float)scr_height, 0.1f, 100.0f);

// timing
float deltaTime = 0.0f;
float lastFrame = 0.0f;

GLuint fbo, color_rbo, depth_stencil_rbo;

bool outlines_enabled = false;

// proc_anim::HumanoidSkeleton character;

Shader ourShader;
Shader outlineShader;

Model       ourModel;
const float outline_width = 0.2f;

Creature natsu;

int main()
{
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_STENCIL_BITS, 0);
    glfwWindowHint(GLFW_DEPTH_BITS, 0);
    // glfwWindowHint(GLFW_DECORATED, GLFW_FALSE);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);  // uncomment this statement to fix compilation on OS X
#endif

    window = glfwCreateWindow(scr_width, scr_height, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetKeyCallback(window, processInput);

    // tell GLFW to capture our mouse and disable the cursor in the window
    // glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glGenRenderbuffers(1, &color_rbo);
    glBindRenderbuffer(GL_RENDERBUFFER, color_rbo);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_RGBA, scr_width / pixelation_factor, scr_height / pixelation_factor);

    glGenRenderbuffers(1, &depth_stencil_rbo);
    glBindRenderbuffer(GL_RENDERBUFFER, depth_stencil_rbo);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, scr_width / pixelation_factor,
                          scr_height / pixelation_factor);

    glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, color_rbo);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_RENDERBUFFER, depth_stencil_rbo);

    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
        std::cout << "ERROR::FRAMEBUFFER:: Framebuffer is not complete!" << std::endl;

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_STENCIL_TEST);
    glStencilFunc(GL_NOTEQUAL, 1, 0xFF);
    glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
    // glDisable(GL_DEPTH_TEST);

    glClearColor(0.0f, 0.1f, 0.1f, 1.0f);

    ourShader     = Shader("1.model_loading.vs", "1.model_loading.fs");
    outlineShader = Shader("outline-shading.vs", "outline-shading.fs");

    // ourModel = Model("resources/objects/Natsu/Natsu Dragneel.dae");
    natsu = Creature("resources/objects/Natsu/Natsu Dragneel.dae");
    natsu.set_scale(0.2f);

    change_pixelation_factor(pixelation_factor);

    // draw in wireframe
    // glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    while (!glfwWindowShouldClose(window))
    {
        float currentFrame = glfwGetTime();
        deltaTime          = currentFrame - lastFrame;
        lastFrame          = currentFrame;

        // update
        update(deltaTime);

        render();

        glfwPollEvents();
    }

    glDeleteFramebuffers(1, &fbo);

    glfwTerminate();
    return 0;
}

void update(float dt) { natsu.update(dt); }

void render()
{
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    natsu.render(projection, view, ourShader, outlineShader, outlines_enabled, outline_width);

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    glBlitFramebuffer(0, 0, scr_width / pixelation_factor, scr_height / pixelation_factor, 0, 0, scr_width, scr_height,
                      GL_COLOR_BUFFER_BIT, GL_NEAREST);

    GLenum err;
    if ((err = glGetError()) != GL_NO_ERROR) std::cout << err << std::endl;

    glfwSwapBuffers(window);
}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow* Window, int Key, int Scancode, int Action, int Mods)
{
    if (Action == GLFW_PRESS)
    {
        if (GLFW_KEY_ESCAPE == Key) glfwSetWindowShouldClose(window, true);

        if (GLFW_KEY_W == Key) natsu.set_unit_velocity_up(0, 0);
        if (GLFW_KEY_S == Key) natsu.set_unit_velocity_down(0, 0);
        if (GLFW_KEY_A == Key) natsu.set_unit_velocity_left(0, 0);
        if (GLFW_KEY_D == Key) natsu.set_unit_velocity_right(0, 0);
    }
    else if (Action == GLFW_RELEASE)
    {
        if (GLFW_KEY_W == Key) natsu.stop_velocity_up(0, 0);
        if (GLFW_KEY_S == Key) natsu.stop_velocity_down(0, 0);
        if (GLFW_KEY_A == Key) natsu.stop_velocity_left(0, 0);
        if (GLFW_KEY_D == Key) natsu.stop_velocity_right(0, 0);
    }
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    scr_width  = width;
    scr_height = width;
    glViewport(0, 0, scr_width / pixelation_factor, scr_height / pixelation_factor);
    projection = glm::perspective(glm::radians(45.0f), (float)scr_width / (float)scr_height, 0.1f, 100.0f);
}

void change_pixelation_factor(int new_value)
{
    pixelation_factor = new_value;
    glViewport(0, 0, scr_width / pixelation_factor, scr_height / pixelation_factor);
}