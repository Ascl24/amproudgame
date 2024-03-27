#include <stdio.h>
#include <stdlib.h>
#include "src/glad.c"
#include <GLFW/glfw3.h>

void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}
int main (void) {
        glfwSetErrorCallback(error_callback);
        glfwInit();
        if (!glfwInit()) return -1;

        GLFWwindow* window = glfwCreateWindow(640, 480, "My Title", NULL, NULL);
        if (!window)
        {
                glfwTerminate();
                exit(EXIT_FAILURE);
        }
        glfwMakeContextCurrent(window);
        gladLoadGL();
        glfwSwapInterval(1);

        while (!glfwWindowShouldClose(window))
        {
                glfwSwapBuffers(window);
                glfwPollEvents();
        }
        glfwDestroyWindow(window);
        glfwTerminate();
        return 0;
}
