//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_Rect fillRect = {SCREEN_WIDTH / 2 - 50, SCREEN_HEIGHT / 2 - 50, 100, 100};
    SDL_RenderFillRect(gRenderer, &fillRect);
}

