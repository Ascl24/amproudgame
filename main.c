#include <stdio.h>
#include <stdlib.h>
#include "src/glad.c"
#include <GLFW/glfw3.h>

// Error fallback function
void error_callback(int error, const char* description)
{
    fprintf(stderr, "Error: %s\n", description);
}

int main (void) {
        // As prior error fallback
        glfwSetErrorCallback(error_callback);

        // Initialize GLFW library
        glfwInit();
        if (!glfwInit()) return -1;

        GLFWwindow* window = glfwCreateWindow(640, 480, "AMPROUDGAME", NULL, NULL);
        if (!window)
        {
                glfwTerminate();
                exit(EXIT_FAILURE);
        }
        // Grabs context and swaps framebuffers
        glfwMakeContextCurrent(window);
        gladLoadGL();
        glfwSwapInterval(1);
        
        // Gameloop
        while (!glfwWindowShouldClose(window))
        {
                glfwSwapBuffers(window);
                glfwPollEvents();
        }
        glfwDestroyWindow(window);
        glfwTerminate();
        return 0;
}
