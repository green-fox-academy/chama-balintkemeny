//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void CenterLines (SDL_Renderer* gRenderer, int x, int y) {
    SDL_RenderDrawLine(gRenderer, x, y, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
}

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 100, 0, 0, 255);

    int x = 0;
    int y = 0;

    do {
        if ((x == 0) && (y != 480)) {
            CenterLines(gRenderer, x, y);
            y += 20;
        } else if ((y == 480) && (x != 640)) {
            CenterLines(gRenderer, x, y);
            x += 20;
        } else if ((x == 640) && (y != 0)) {
            CenterLines(gRenderer, x, y);
            y -= 20;
        } else if (y == 0) {
            CenterLines(gRenderer, x, y);
            x -= 20;
        }
    } while ((x != 0) || (y != 0));
}

