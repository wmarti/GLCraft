#include "Engine.hpp"

void Engine::init()
{
	initWindow();
}

void Engine::run()
{
    /* Loop until the user closes the window */
    while (!glfwWindowShouldClose(glfwWindow))
    {
        /* Render here */
        glClear(GL_COLOR_BUFFER_BIT);

        /* Swap front and back buffers */
        glfwSwapBuffers(glfwWindow);

        /* Poll for and process events */
        glfwPollEvents();
    }
}

void Engine::cleanup()
{
    glfwTerminate();
}

void Engine::initWindow() {
    /* Initialize the library */
    if (!glfwInit())
        throw std::runtime_error("Could not initialize GLFW.");

    /* Create a windowed mode window and its OpenGL context */
    glfwWindow = glfwCreateWindow(1600, 1200, "GLCraft", NULL, NULL);
    if (!glfwWindow)
    {
        glfwTerminate();
        throw std::runtime_error("Could not create GLFW Window.");
    }

    /* Make the window's context current */
    glfwMakeContextCurrent(glfwWindow);
}