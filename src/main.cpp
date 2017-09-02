#include <GLFW\glfw3.h>
#include <iostream>
int main(int argv, char** argc)
{
	if (!glfwInit()) {
		std::cout << "EVERYTHING IS HORRIBLE!" << std::endl;
		return -1;
	}
    return 1;
}