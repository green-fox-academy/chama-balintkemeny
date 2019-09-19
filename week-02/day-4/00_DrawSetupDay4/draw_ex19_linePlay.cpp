// Line Play
// Created by Kemény Bálint on 2019. 09. 19..
//

#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    int startA[2] = {0, 0};
    int startB[2] = {SCREEN_WIDTH, 0};
    int startC[2] = {0, SCREEN_HEIGHT};
    int startD[2] = {SCREEN_WIDTH, SCREEN_HEIGHT};

    int lineCount = 20;
    int incrX = SCREEN_WIDTH / lineCount;
    int incrY = SCREEN_HEIGHT / lineCount;

    SDL_SetRenderDrawColor(gRenderer, 10, 190, 220, 255);

    for (int i = 0; i < lineCount; ++i) {
        SDL_RenderDrawLine(gRenderer, startA[0] + i * incrX, startA[1], startB[0], startB[1] + i * incrY);
    }

    SDL_SetRenderDrawColor(gRenderer, 255, 0, 255, 255);

    for (int j = 0; j < lineCount; ++j) {
        SDL_RenderDrawLine(gRenderer, startD[0] - j * incrX, startD[1], startC[0], startC[1] - j * incrY);
    }
}