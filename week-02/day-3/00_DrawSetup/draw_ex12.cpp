//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void ThreeDSteps (SDL_Renderer* gRenderer, int siz, int incr) {
    int x = 0;
    while (x < SCREEN_HEIGHT - siz) {

        SDL_SetRenderDrawColor(gRenderer, 157, 112, 194, 255);
        SDL_Rect fillRect = {x, x, siz, siz};
        SDL_RenderFillRect(gRenderer, &fillRect);

        for (int i = 0; i < 4; ++i) {
            if (siz - 2 * i < 2) {
                break;
            } else {
                SDL_SetRenderDrawColor(gRenderer, 100, 50, 140, 255);
                SDL_Rect drawRect = {x + i, x + i , siz - 2 * i, siz - 2 * i};
                SDL_RenderDrawRect(gRenderer, &drawRect);
            }
        }

        x += siz;
        siz += incr;
    }
}

void draw(SDL_Renderer* gRenderer) {
    int siz = 20;
    int incr = 10;
    ThreeDSteps(gRenderer, siz, incr);
}