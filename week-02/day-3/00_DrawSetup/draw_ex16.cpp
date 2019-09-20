// Starry sky
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"
#include <cstdlib>
#include <ctime>


int starPos[10][2];
int *ptrStarPos = &starPos[0][0];
int starSize = 5;
bool fill = false;

void fillStarPos () {
    srand (time(NULL));
    for (int i = 0; i < 10; ++i) {
        *(ptrStarPos + 2 * i) = rand() % (SCREEN_WIDTH - starSize + 1);
        *(ptrStarPos + 2 * i + 1) = rand() % (SCREEN_HEIGHT / 2 - starSize + 1);
    }
    fill = true;
}


void draw(SDL_Renderer* gRenderer) {

    if (!fill) {
        fillStarPos();
    }

    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    SDL_Rect fillRect = {0, 0, SCREEN_WIDTH, SCREEN_HEIGHT};
    SDL_RenderFillRect(gRenderer, &fillRect);

    srand (time(NULL));

    for (int i = 0; i < 10; ++i) {
        int light = rand() % 205 + 50;
        SDL_SetRenderDrawColor(gRenderer, light, light, light, 255);
        SDL_Rect fillRect2 = {starPos[i][0], starPos[i][1], starSize, starSize};
        SDL_RenderFillRect(gRenderer, &fillRect2);
    }

}

