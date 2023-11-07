#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <glm.hpp>
#include <iostream>

int main(void) {
	glfwInit();	//Initialize the GLFW library

	//Create Window glfwCreateWindow(WIDTH, HEIGHT, "Test Window", nullptr, nullptr)
	GLFWwindow* window = glfwCreateWindow(800, 600, "First Window", NULL, NULL);
	
	//Check the window works or not
	if (window == NULL) {
		std::cout << "Failed to Create Window" << std::endl;
		return 0;
	}

	glfwMakeContextCurrent(window);

	while (!glfwWindowShouldClose(window)) {
		glfwPollEvents();
	}
}