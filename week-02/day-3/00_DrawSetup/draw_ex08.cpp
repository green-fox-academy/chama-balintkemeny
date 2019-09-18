//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void PositionSquare (SDL_Renderer* gRenderer, int x, int y) {
    SDL_Rect fillRect = {x, y, 50, 50};
    SDL_RenderFillRect(gRenderer, &fillRect);
}

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 129, 185, 0, 255);
    int x = 100;
    int y = SCREEN_HEIGHT / 2 - 50;
    for (int i = 0; i < 5; ++i) {
        PositionSquare(gRenderer, x, y);
        x += 75;
        if (i % 2 == 0) {
            y -= 50;
        } else {
            y += 100;
        }
    }
}

