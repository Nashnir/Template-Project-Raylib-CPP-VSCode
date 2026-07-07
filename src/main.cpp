#include "raylib.h"

int main()
{
    InitWindow(800, 450, "RayLibTemplateCPP - raylib");

    SetTargetFPS(60);

    while (!WindowShouldClose())
    {
        BeginDrawing();

        ClearBackground(RAYWHITE);
        DrawText("Hello from the Raylib VSCode C++ Template Project", 190, 200, 20, DARKGRAY);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}