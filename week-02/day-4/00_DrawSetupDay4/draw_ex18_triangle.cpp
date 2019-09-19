// Triangle Builder
// Created by Kemény Bálint on 2019. 09. 19..
//
#include "draw.h"
#include <cmath>

void drawTriangle (SDL_Renderer* gRenderer, int ix, int iy, int iside) {
    auto x = (double)ix;
    auto y = (double)iy;
    auto side = (double)iside;

    double A[2] = {x, y};
    double B[2] = {x + side, y};
    double C[2] = {x + side / 2, y - side * pow(3.0, 0.5) / 2};

    SDL_RenderDrawLine(gRenderer, (int)A[0], (int)A[1], (int)B[0], (int)B[1]);
    SDL_RenderDrawLine(gRenderer, (int)B[0], (int)B[1], (int)C[0], (int)C[1]);
    SDL_RenderDrawLine(gRenderer, (int)C[0], (int)C[1], (int)A[0], (int)A[1]);
}

void draw(SDL_Renderer* gRenderer) {
    int startX = 10;
    int startY = SCREEN_HEIGHT - 10;
    int triangleCount = 21;
    int triangleSize = (SCREEN_HEIGHT - 20) / triangleCount;

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    drawTriangle(gRenderer, startX, startY, triangleSize);

    while (triangleCount > 0) {
        for (int i = 0; i < triangleCount; ++i) {
            drawTriangle(gRenderer, startX, startY, triangleSize);
            int incrX = triangleSize;
            startX += incrX;
        }
        startX = (int)(startX - (triangleCount - 0.5) * triangleSize);
        startY -= (int)(triangleSize * pow(3.0, 0.5) / 2);
        triangleCount--;
    }


}
