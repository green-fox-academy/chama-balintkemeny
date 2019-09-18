//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    SDL_RenderDrawLine(gRenderer, 0, 0, SCREEN_WIDTH, SCREEN_HEIGHT);

    SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
    SDL_RenderDrawLine(gRenderer, 0, SCREEN_HEIGHT, SCREEN_WIDTH, 0);
}

