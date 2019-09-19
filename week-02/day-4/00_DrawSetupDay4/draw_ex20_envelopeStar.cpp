// Envelope star
// Created by Kemény Bálint on 2019. 09. 19..
//

#include "draw.h"

void draw(SDL_Renderer* gRenderer) {
    int pCenter[2] = {SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2};
    int pUp[2] = {SCREEN_WIDTH /2, 0};
    int pDown[2] = {SCREEN_WIDTH / 2, SCREEN_HEIGHT};
    int pLeft[2] = {0, SCREEN_HEIGHT / 2};
    int pRight[2] = {SCREEN_WIDTH, SCREEN_HEIGHT / 2};

    int lineCount = 20;
    int incrX = SCREEN_WIDTH / (2 * lineCount);
    int incrY = SCREEN_HEIGHT / (2 * lineCount);

    SDL_SetRenderDrawColor(gRenderer, 10, 0, 255, 255);

    for (int i = 0; i < lineCount; ++i) {
        SDL_RenderDrawLine(gRenderer, pUp[0], pUp[1] + i * incrY, pCenter[0] - i * incrX, pCenter[1]);
        SDL_RenderDrawLine(gRenderer, pLeft[0] + i * incrX, pLeft[1], pCenter[0], pCenter[1] + i * incrY);
        SDL_RenderDrawLine(gRenderer, pDown[0], pDown[1] - i * incrY, pCenter[0] + i * incrX, pCenter[1]);
        SDL_RenderDrawLine(gRenderer, pRight[0] - i * incrX, pRight[1], pCenter[0], pCenter[1] - i * incrY);
    }
}