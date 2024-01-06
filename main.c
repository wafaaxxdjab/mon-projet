#include "raylib.h"

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
void drawArray(int arr[], int n, int yPos, int flashIndex) {
    for (int i = 0; i < n; i++) {
        Color rectColor = (i == flashIndex || i == flashIndex + 1) ? RED : BLACK;
        DrawRectangle(i * 150, yPos - arr[i] * 10, 90, arr[i] * 10, rectColor);
        DrawText(TextFormat("%d", arr[i]), i * 150 + 10, yPos - arr[i] * 10 + 10, 50, WHITE);
    }
}
int main() {
    const int screenWidth = 1500;
    const int screenHeight = 1000;

    InitWindow(screenWidth, screenHeight, "Bubble Sort Visualization");

    int arr[] = {100, 50, 30, 10, 37, 19, 93, 75};
    int n = sizeof(arr) / sizeof(arr[0]); 
    SetTargetFPS(1);

    int i, j;

    DrawText("Example:", 90, 20, 50, BLACK);

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            BeginDrawing();
            ClearBackground(RAYWHITE);
            drawArray(arr, n, GetScreenHeight(), j);
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
            EndDrawing();
            for (int delay = 0; delay < 1000000; delay++) {
                // Do nothing
            }
        }
    }
    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        drawArray(arr, n, 500, -1);

        EndDrawing();
    }
    CloseWindow();
    return 0;
}
