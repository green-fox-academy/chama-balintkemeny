//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"
#include <cmath>

void DrawHex (SDL_Renderer* gRenderer, int hexSide, int ix, int iy) {
    auto x = (double)ix;
    auto y = (double)iy;
    auto h = (double)hexSide;

    double c1[2] = {x, y};
    double c2[2] = {x + h, y};
    double c3[2] = {x + 1.5 * h, y + h * pow(3.0, 0.5) / 2};
    double c4[2] = {x + h, y + h * pow(3.0, 0.5)};
    double c5[2] = {x, y + h * pow(3.0, 0.5)};
    double c6[2] = {x - 0.5 * h, y + h * pow(3.0, 0.5) / 2};

    SDL_RenderDrawLine(gRenderer, (int)c1[0], (int)c1[1], (int)c2[0], (int)c2[1]);
    SDL_RenderDrawLine(gRenderer, (int)c2[0], (int)c2[1], (int)c3[0], (int)c3[1]);
    SDL_RenderDrawLine(gRenderer, (int)c3[0], (int)c3[1], (int)c4[0], (int)c4[1]);
    SDL_RenderDrawLine(gRenderer, (int)c4[0], (int)c4[1], (int)c5[0], (int)c5[1]);
    SDL_RenderDrawLine(gRenderer, (int)c5[0], (int)c5[1], (int)c6[0], (int)c6[1]);
    SDL_RenderDrawLine(gRenderer, (int)c6[0], (int)c6[1], (int)c1[0], (int)c1[1]);

}

void draw(SDL_Renderer* gRenderer) {
    int hexSide = 20;
    int startX = SCREEN_WIDTH / 2 - hexSide / 2;
    int startY = 10;

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);

    int imax = 3;
    for (int j = 0; j < 3; ++j) {

        for (int i = 0; i < imax; ++i) {
            DrawHex(gRenderer, hexSide, startX, startY);
            double incrX = 1.5 * (double)hexSide;
            startX -= (int)incrX;
            double incrY = (double)hexSide * pow(3.0, 0.5) / 2;
            startY += (int)incrY;
        }

        for (int i = 0; i < imax; ++i) {
            DrawHex(gRenderer, hexSide, startX, startY);
            double incrY = (double)hexSide * pow(3.0, 0.5);
            startY += (int)incrY;
        }

        for (int i = 0; i < imax; ++i) {
            DrawHex(gRenderer, hexSide, startX, startY);
            double incrX = 1.5 * (double)hexSide;
            startX += (int)incrX;
            double incrY = (double)hexSide * pow(3.0, 0.5) / 2;
            startY += (int)incrY;
        }

        for (int i = 0; i < imax; ++i) {
            DrawHex(gRenderer, hexSide, startX, startY);
            double incrX = 1.5 * (double)hexSide;
            startX += (int)incrX;
            double incrY = (double)hexSide * pow(3.0, 0.5) / 2;
            startY -= (int)incrY;
        }

        for (int i = 0; i < imax; ++i) {
            DrawHex(gRenderer, hexSide, startX, startY);
            double incrY = (double)hexSide * pow(3.0, 0.5);
            startY -= (int)incrY;
        }

        for (int i = 0; i < imax; ++i) {
            DrawHex(gRenderer, hexSide, startX, startY);
            double incrX = 1.5 * (double)hexSide;
            startX -= (int)incrX;
            double incrY = (double)hexSide * pow(3.0, 0.5) / 2;
            startY -= (int)incrY;
        }

        imax -= 1;
        double incrCycle = (double)hexSide * pow(3.0, 0.5) / 2;
        startY += 2 * (int)incrCycle;

    }
}

