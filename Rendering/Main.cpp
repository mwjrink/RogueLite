#include <glad/glad.h>

#include <GLFW/glfw3.h>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

#define STB_IMAGE_IMPLEMENTATION

#include "stb_image.h"

#include "camera.h"
#include "model.h"
#include "shader.h"

#include "HumanoidSkeleton.h"

#include <iostream>

void framebuffer_size_callback(GLFWwindow* window, int width, int height);
void mouse_callback(GLFWwindow* window, double xpos, double ypos);
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset);
void processInput(GLFWwindow* window);
void render();

// settings
const unsigned int SCR_WIDTH         = 1920;
const unsigned int SCR_HEIGHT        = 1080;
const unsigned int pixelation_factor = 1; // for testing the animations, this is gonna be 1

const float outline_width = 0.2f;

// camera
Camera camera(glm::vec3(0.0f, 0.0f, 3.0f), glm::vec3(0.0f, 0.0f, 1.0f));
float  lastX      = SCR_WIDTH / 2.0f;
float  lastY      = SCR_HEIGHT / 2.0f;
bool   firstMouse = true;

// timing
float deltaTime = 0.0f;
float lastFrame = 0.0f;

GLuint fbo, color_rbo, depth_stencil_rbo;

bool cam_mode = false;

proc_anim::HumanoidSkeleton character;

Shader ourShader;
Shader outlineShader;

Model ourModel;

GLFWwindow* window;

float rot = 0.0f;

int main()
{
    // glfw: initialize and configure
    // ------------------------------
    glfwInit();
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 4);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 3);
    glfwWindowHint(GLFW_OPENGL_PROFILE, GLFW_OPENGL_CORE_PROFILE);
    glfwWindowHint(GLFW_STENCIL_BITS, 0);
    glfwWindowHint(GLFW_DEPTH_BITS, 0);

#ifdef __APPLE__
    glfwWindowHint(GLFW_OPENGL_FORWARD_COMPAT, GL_TRUE);  // uncomment this statement to fix compilation on OS X
#endif

    // glfw window creation
    // --------------------
    window = glfwCreateWindow(SCR_WIDTH, SCR_HEIGHT, "LearnOpenGL", NULL, NULL);
    if (window == NULL)
    {
        std::cout << "Failed to create GLFW window" << std::endl;
        glfwTerminate();
        return -1;
    }
    glfwMakeContextCurrent(window);
    glfwSetFramebufferSizeCallback(window, framebuffer_size_callback);
    glfwSetCursorPosCallback(window, mouse_callback);
    glfwSetScrollCallback(window, scroll_callback);

    // tell GLFW to capture our mouse
    glfwSetInputMode(window, GLFW_CURSOR, GLFW_CURSOR_DISABLED);

    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }

    glGenRenderbuffers(1, &color_rbo);
    glBindRenderbuffer(GL_RENDERBUFFER, color_rbo);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_RGBA, SCR_WIDTH / pixelation_factor, SCR_HEIGHT / pixelation_factor);

    glGenRenderbuffers(1, &depth_stencil_rbo);
    glBindRenderbuffer(GL_RENDERBUFFER, depth_stencil_rbo);
    glRenderbufferStorage(GL_RENDERBUFFER, GL_DEPTH24_STENCIL8, SCR_WIDTH / pixelation_factor,
                          SCR_HEIGHT / pixelation_factor);

    glGenFramebuffers(1, &fbo);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);

    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_COLOR_ATTACHMENT0, GL_RENDERBUFFER, color_rbo);
    glFramebufferRenderbuffer(GL_FRAMEBUFFER, GL_DEPTH_STENCIL_ATTACHMENT, GL_RENDERBUFFER, depth_stencil_rbo);

    if (glCheckFramebufferStatus(GL_FRAMEBUFFER) != GL_FRAMEBUFFER_COMPLETE)
        std::cout << "ERROR::FRAMEBUFFER:: Framebuffer is not complete!" << std::endl;

    // configure global opengl state
    // -----------------------------
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_STENCIL_TEST);
    glStencilFunc(GL_NOTEQUAL, 1, 0xFF);
    glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
    // glDisable(GL_DEPTH_TEST);

    // build and compile shaders
    // -------------------------
    ourShader     = Shader("1.model_loading.vs", "1.model_loading.fs");
    outlineShader = Shader("outline-shading.vs", "outline-shading.fs");

    // load models
    // -----------
    // Model ourModel("resources/objects/nanosuit/nanosuit.obj");
    ourModel = Model("resources/objects/Natsu/Natsu Dragneel.dae");

    // draw in wireframe
    // glPolygonMode(GL_FRONT_AND_BACK, GL_LINE);

    // render loop
    // -----------
    while (!glfwWindowShouldClose(window))
    {
        // per-frame time logic
        // --------------------
        float currentFrame = glfwGetTime();
        deltaTime          = currentFrame - lastFrame;
        lastFrame          = currentFrame;

        // input
        // -----
        processInput(window);

		rot += 0.01f;

        // render
        // ------
        render();

        glfwPollEvents();
    }

    glDeleteFramebuffers(1, &fbo);

    // glfw: terminate, clearing all previously allocated GLFW resources.
    // ------------------------------------------------------------------
    glfwTerminate();
    return 0;
}

void render()
{
    glViewport(0, 0, SCR_WIDTH / pixelation_factor, SCR_HEIGHT / pixelation_factor);
    glBindFramebuffer(GL_FRAMEBUFFER, fbo);
    glClearColor(0.0f, 0.1f, 0.1f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);

    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    glEnable(GL_STENCIL_TEST);
    glStencilFunc(GL_NOTEQUAL, 1, 0xFF);
    glStencilOp(GL_KEEP, GL_KEEP, GL_REPLACE);
    // glDepthFunc(GL_LEQUAL);

    // glEnable(GL_BLEND);
    glm::mat4 projection = glm::perspective(glm::radians(camera.Zoom), (float)SCR_WIDTH / (float)SCR_HEIGHT, 0.1f, 100.0f);
    glm::mat4 view       = camera.GetViewMatrix();
    glm::mat4 model      = glm::mat4(1.0f);
    model = glm::translate(model, glm::vec3(0.0f, -1.75f, 0.0f));  // translate it down so it's at the center of the scene
    model = glm::scale(model, glm::vec3(0.2f, 0.2f, 0.2f));        // it's a bit too big for our scene, so scale it down
    model = glm::rotate(model, rot, glm::vec3(0.0f, 0.0f, 1.0f));

    // glDepthFunc(GL_GEQUAL);
    glStencilFunc(GL_ALWAYS, 1, 0xFF);  // all fragments should update the stencil buffer
    glStencilMask(0xFF);                // enable writing to the stencil buffer
    {
        ourShader.use();
        ourShader.setMat4("projection", projection);
        ourShader.setMat4("view", view);
        ourShader.setMat4("model", model);
        ourModel.Draw(ourShader);
    }

	// @Max, 7/12/19, commented out outlining to better debug
	// @Max, 7/15/19, probably gonna do outlining by scaling the 2d sprite and painting it black then painting 
	// the real sprite to the screen rather than this nonsense, it will be far easier
    //// glDepthFunc(GL_LEQUAL);
    //glStencilFunc(GL_NOTEQUAL, 1, 0xFF);  // all fragments should update the stencil buffer
    //glStencilMask(0x00);                  // enable writing to the stencil buffer
    //glDisable(GL_DEPTH_TEST);
    //{
    //    outlineShader.use();
    //    outlineShader.setMat4("projection", projection);
    //    outlineShader.setMat4("view", view);
    //    outlineShader.setMat4("model", glm::scale(model, glm::vec3(1.0f + outline_width)));
    //    outlineShader.setFloat("outline_width", outline_width);
    //    ourModel.Draw(outlineShader);
    //}

    glStencilMask(0xFF);
    glEnable(GL_DEPTH_TEST);

    glBindFramebuffer(GL_DRAW_FRAMEBUFFER, 0);  // back to default
                                                // glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
    // glClear(GL_COLOR_BUFFER_BIT);
    // glViewport(0, 0, SCR_WIDTH, SCR_HEIGHT);

    glBlitFramebuffer(0, 0, SCR_WIDTH / pixelation_factor, SCR_HEIGHT / pixelation_factor, 0, 0, SCR_WIDTH, SCR_HEIGHT,
                      GL_COLOR_BUFFER_BIT, GL_NEAREST);

    GLenum err;
    if ((err = glGetError()) != GL_NO_ERROR) std::cout << err << std::endl;

    // glfw: swap buffers and poll IO events (keys pressed/released, mouse moved etc.)
    // -------------------------------------------------------------------------------
    glfwSwapBuffers(window);
}

// process all input: query GLFW whether relevant keys are pressed/released this frame and react accordingly
// ---------------------------------------------------------------------------------------------------------
void processInput(GLFWwindow* window)
{
    if (glfwGetKey(window, GLFW_KEY_ESCAPE) == GLFW_PRESS) glfwSetWindowShouldClose(window, true);

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        if (cam_mode)
            camera.ProcessKeyboard(FORWARD, deltaTime);
        else
            proc_anim::set_unit_velocity_up(&character);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        if (cam_mode)
            camera.ProcessKeyboard(BACKWARD, deltaTime);
        else
            proc_anim::set_unit_velocity_down(&character);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        if (cam_mode)
            camera.ProcessKeyboard(LEFT, deltaTime);
        else
            proc_anim::set_unit_velocity_left(&character);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        if (cam_mode)
            camera.ProcessKeyboard(RIGHT, deltaTime);
        else
            proc_anim::set_unit_velocity_right(&character);

    if (glfwGetKey(window, GLFW_KEY_W) == GLFW_PRESS)
        if (!cam_mode) proc_anim::stop_velocity_up(&character);
    if (glfwGetKey(window, GLFW_KEY_S) == GLFW_PRESS)
        if (!cam_mode) proc_anim::stop_velocity_down(&character);
    if (glfwGetKey(window, GLFW_KEY_A) == GLFW_PRESS)
        if (!cam_mode) proc_anim::stop_velocity_left(&character);
    if (glfwGetKey(window, GLFW_KEY_D) == GLFW_PRESS)
        if (!cam_mode) proc_anim::stop_velocity_right(&character);

    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_PRESS) cam_mode = true;
    if (glfwGetKey(window, GLFW_KEY_SPACE) == GLFW_RELEASE) cam_mode = false;
}

// glfw: whenever the window size changed (by OS or user resize) this callback function executes
// ---------------------------------------------------------------------------------------------
void framebuffer_size_callback(GLFWwindow* window, int width, int height)
{
    // make sure the viewport matches the new window dimensions; note that width and
    // height will be significantly larger than specified on retina displays.
    // glViewport(0, 0, width, height);
    // SCR_WIDTH = width;
    // SCR_HEIGHT = width;
}

// glfw: whenever the mouse moves, this callback is called
// -------------------------------------------------------
void mouse_callback(GLFWwindow* window, double xpos, double ypos)
{
    if (cam_mode)
    {
        if (firstMouse)
        {
            lastX      = xpos;
            lastY      = ypos;
            firstMouse = false;
        }

        float xoffset = xpos - lastX;
        float yoffset = lastY - ypos;  // reversed since y-coordinates go from bottom to top

        lastX = xpos;
        lastY = ypos;

        camera.ProcessMouseMovement(xoffset, yoffset);
    }
}

// glfw: whenever the mouse scroll wheel scrolls, this callback is called
// ----------------------------------------------------------------------
void scroll_callback(GLFWwindow* window, double xoffset, double yoffset) { camera.ProcessMouseScroll(yoffset); }