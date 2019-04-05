#ifndef GL3W_INCLUDED
#define GL3W_INCLUDED
#include <GL/gl3w.h>
#endif

#include <chrono>
#include <fstream>
#include <iostream>
#include <thread>

#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>

// NOT REQUIRED
#include <cstdio>
#include <cstdlib>
#include <ctime>

#include "DebugUtilities.h"
#include "Graphics.h"
#include "MainLoopCallbacks.h"
#include "WindowCallbacks.h"
#include "stb_image.h"
#include "Renderable.h"

#include "BASESPRITETESTINGBLEH.h"

#ifdef _WIN32
// Math functions
#define _USE_MATH_DEFINES
#endif

int g_width, g_height;

void Update(float dt);
void Render(float dt);

int main(int argc, char* argv[])
{
    if (!Init(1920, 1080))
    {
        std::cin.get();
        return -1;
    }

    // TODO: thread pooling and work queue
    // auto thread_number = std::thread::hardware_concurrency();
    // if (thread_number == 0)
    //    fprintf(stderr, "failed to detect maximum concurrency");

    // TODO: FULLSCREEN
    // GLFWwindow* window = glfwCreateWindow(640, 480, "My Title",
    // glfwGetPrimaryMonitor(), NULL);

    long frames = 0;

	INIT_TEST_SPRITE();

     double t0 = glfwGetTime();
     double t1;
     float  dt;

    glfwSwapInterval(1);

    double time_start = glfwGetTime();
    while (!glfwWindowShouldClose(window))
    {
        glClearColor(0.2f, 0.3f, 0.3f, 1.0f);
        glClear(ALL_BUFFERS);  // Clear initial state

        glUseProgram(shaderProgram);

         t1 = glfwGetTime();
         dt = (float)(t1 - t0);
         t0 = t1;

         Update(dt);
         Render(dt);

        // do shit?
        //  WRITE TO FRAME BUFFER

        // glActiveTexture(GL_TEXTURE0);
        // glBindTexture(GL_TEXTURE_2D, texture);

        // create transformations
        // glm::mat4 transform = glm::mat4(1.0f);
        // transform           = glm::translate(transform, glm::vec3(0.5f, -0.5f, 0.0f));
        // transform           = glm::rotate(transform, (float)glfwGetTime(), glm::vec3(0.0f, 0.0f, 1.0f));

        // glm::mat4 transform = glm::mat4(1.0f);

        // transform           = glm::rotate(transform, glm::radians(90.0f), glm::vec3(0.0, 0.0, 1.0));
        // transform           = glm::scale(transform, glm::vec3(0.5, 0.5, 0.5));

        // render container
        // glUseProgram(shaderProgram);

        // unsigned int transformLoc = glGetUniformLocation(shaderProgram, "transform");
        // glUniformMatrix4fv(transformLoc, 1, GL_FALSE, glm::value_ptr(transform));

        // glBindVertexArray(VAO);
        // glDrawElements(GL_TRIANGLES, 6, GL_UNSIGNED_INT, 0);

        /*TIME_THIS(glBlitFramebuffer(0, 0, g_width, g_height, 0, 0, g_width, g_height, GL_COLOR_BUFFER_BIT, GL_NEAREST);,
         * "blit");*/

        TIME_THIS(glfwSwapBuffers(window);, "swap");

        frames++;

        // pretty sure this is unessecary
        // TIME_THIS(glFinish();, "glfinish");

        // THIS SHOULD BE ON ANOTHER THREAD
        // THIS MUST BE ON THE MAIN THREAD APPARENTLY
        TIME_THIS(glfwPollEvents();, "poll events");
    }

    // Not necessary due to terminate
    // glfwDestroyWindow(window);

    double end = glfwGetTime();

    glfwTerminate();

    printf("Framerate: %f\n", (double(frames) / double(end - time_start)));

    std::cin.get();

    return 0;
}
