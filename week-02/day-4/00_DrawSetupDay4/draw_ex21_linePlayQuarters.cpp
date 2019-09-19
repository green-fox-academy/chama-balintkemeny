// Line play quarters
// Created by Kemény Bálint on 2019. 09. 19..
//

#include "draw.h"

void drawLinePlay (SDL_Renderer* gRenderer, int x, int y, int nDiv, int lineCount, int colourA[3], int colourB[3]) {
    int sizX = SCREEN_WIDTH / nDiv;
    int sizY = SCREEN_HEIGHT / nDiv;
    int incrX = SCREEN_WIDTH / (nDiv * lineCount);
    int incrY = SCREEN_HEIGHT / (nDiv * lineCount);

    int startA[2] = {x, y};
    int startB[2] = {x + sizX, y};
    int startC[2] = {x, y + sizY};
    int startD[2] = {x + sizX, y + sizY};

    SDL_SetRenderDrawColor(gRenderer, colourA[0], colourA[1], colourA[2], 255);
    for (int i = 0; i < lineCount; ++i) {
        SDL_RenderDrawLine(gRenderer, startA[0] + i * incrX, startA[1], startB[0], startB[1] + i * incrY);
    }

    SDL_SetRenderDrawColor(gRenderer, colourB[0], colourB[1], colourB[2], 255);
    for (int j = 0; j < lineCount; ++j) {
        SDL_RenderDrawLine(gRenderer, startD[0] - j * incrX, startD[1], startC[0], startC[1] - j * incrY);
    }
}

void draw(SDL_Renderer* gRenderer) {
    int nDivision = 8;
    int lineCount = 20;
    int colourA[3] = {0, 0, 0};
    int colourB[3] = {0, 0, 0};
    int startX = 0;
    int startY = 0;

    for (int i = 0; i < nDivision; ++i) {
        for (int j = 0; j < nDivision; ++j) {
            drawLinePlay(gRenderer, startX, startY, nDivision, lineCount, colourA, colourB);
            startX += SCREEN_WIDTH / nDivision;
            colourA[0] += 255 / nDivision;
            colourB[1] += 255 / nDivision;

        }
        startY += SCREEN_HEIGHT / nDivision;
        startX -= SCREEN_WIDTH;
        colourA[0] += 0;
        colourB[1] += 0;
        colourA[1] += 255 / nDivision;
        colourB[2] += 255 / nDivision;
    }
}