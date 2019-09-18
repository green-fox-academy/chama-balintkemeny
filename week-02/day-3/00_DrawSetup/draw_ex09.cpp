//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void CenteredBoxes (SDL_Renderer* gRenderer, int siz) {
    SDL_Rect drawRect = {SCREEN_WIDTH / 2 - siz / 2, SCREEN_HEIGHT / 2 - siz / 2, siz, siz};
    SDL_RenderDrawRect(gRenderer, &drawRect);
}

void draw(SDL_Renderer* gRenderer) {
    int colours[4][3] = {{243, 79, 35}, {129, 185, 0}, {1, 164, 239}, {254, 186, 1}};
    int siz = 50;
    for (int i = 0; i < 4; ++i) {
        SDL_SetRenderDrawColor(gRenderer, colours[i][0], colours[i][1], colours[i][2], 255);
        CenteredBoxes(gRenderer, siz);
        siz += 50;
    }
}

