#pragma once
#include <GLFW/glfw3.h>
#include <stdexcept>

class Engine {
public:
	void init();
	void run();
	void cleanup();

private:
	void initWindow();

	GLFWwindow* glfwWindow;
};