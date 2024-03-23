#include <raylib.h>

const int SCREEN_WIDTH = 1024;
const int SCREEN_HEIGHT = 768;

int main(void) {
        InitWindow(SCREEN_WIDTH, SCREEN_HEIGHT, "Better than Sex");
        
        SetTargetFPS(60);

        while (!WindowShouldClose()) {
                BeginDrawing();
                ClearBackground(RAYWHITE);
                DrawText("It's a beautiful death.", 190, 200, 20, LIGHTGRAY);
                EndDrawing();
        }

        CloseWindow();
        return 0;
}
