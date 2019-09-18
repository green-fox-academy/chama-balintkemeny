//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void draw(SDL_Renderer* gRenderer) {

    int sqrSize = SCREEN_HEIGHT / 8;
    int x = 0;
    int y = 0;

    for (int i = 0; i < 8; ++i) {
        for (int j = 0; j < 8; ++j) {
            if ((i + j) % 2 == 0) {
                SDL_SetRenderDrawColor(gRenderer, 255, 255, 255, 255);
            } else {
                SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
            }
            SDL_Rect fillRect = {x, y, sqrSize, sqrSize};
            SDL_RenderFillRect(gRenderer, &fillRect);
            x += sqrSize;
        }
        x = 0;
        y += sqrSize;
    }
}

