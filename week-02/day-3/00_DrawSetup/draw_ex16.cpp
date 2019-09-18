//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"
#include <cstdlib>
#include <ctime>


int starPos[10][2];
int *ptrStarPos = &starPos[0][0];
bool fill = false;

void fillStarPos () {
    srand (time(NULL));
    for (int i = 0; i < 10; ++i) {
        *(ptrStarPos + 2 * i) = rand() % 636;
        *(ptrStarPos + 2 * i + 1) = rand() % 236;
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
        SDL_Rect fillRect = {starPos[i][0], starPos[i][1], 5, 5};
        SDL_RenderFillRect(gRenderer, &fillRect);
    }

}

