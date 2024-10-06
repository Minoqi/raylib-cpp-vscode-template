#include "raylib.h"

int main(){
    // Initialize
    const int screenWidth = 600;
    const int screenHeight = 400;

    InitWindow(screenWidth, screenHeight, "Raylib Window!");

    // Gameloop
    while (!WindowShouldClose()){
        // Render
        BeginDrawing();
        ClearBackground(RAYWHITE);
        EndDrawing();
    }

    // Deinitialization
    CloseWindow();
    return 0;
}
