//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void HorizontalLines (SDL_Renderer* gRenderer, int x, int y) {
    SDL_RenderDrawLine(gRenderer, x, y, x + 50, y);
}

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    int x = 50;
    int y = 50;

    for (int i = 0; i < 5; ++i) {
        HorizontalLines(gRenderer, x, y);
        x += 20;
        y += 25;
    }
}

