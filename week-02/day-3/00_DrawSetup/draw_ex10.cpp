//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void RainbowBoxes (SDL_Renderer* gRenderer, int siz, int col[3]) {
    SDL_SetRenderDrawColor(gRenderer, col[0], col[1], col[2], 255);
    SDL_Rect fillRect = {SCREEN_WIDTH / 2 - siz / 2, SCREEN_HEIGHT / 2 - siz / 2, siz, siz};
    SDL_RenderFillRect(gRenderer, &fillRect);
}

void draw(SDL_Renderer* gRenderer) {
    int colIndex = 0;
    int colours[7][3] = {{255, 0, 0}, {255, 127, 0}, {255, 255, 0}, {0, 189, 63},
                         {0, 104, 255}, {122, 0, 230}, {212, 0, 199}};
    int siz = SCREEN_HEIGHT;
    while (siz > 19) {
        RainbowBoxes(gRenderer, siz, colours[colIndex]);
        siz -= 20;
        if (colIndex < 6) {
            colIndex++;
        } else {
            colIndex = 0;
        }
    }
}

