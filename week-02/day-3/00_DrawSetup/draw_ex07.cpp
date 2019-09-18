//
// Created by Kemény Bálint on 2019. 09. 18..
// I've recreated the Microsoft logo, hell yeah!
#include "draw.h"

void draw(SDL_Renderer* gRenderer) {

    int r = 0;
    int g = 0;
    int b = 0;
    int x = 0;
    int y = 0;
    int h = 50;
    int w = 50;

    for (int i = 0; i < 4; ++i) {

        if (i % 2 == 0) {
            x = SCREEN_WIDTH / 2 - 53;
        } else {
            x = SCREEN_WIDTH / 2 + 3;
        }

        if (i < 2) {
            y = SCREEN_HEIGHT / 2 - 53;
        } else {
            y = SCREEN_HEIGHT / 2 + 3;
        }

        if (i == 0) {
            r = 242, g = 80, b = 34;
        } else if (i == 1) {
            r = 129, g = 185, b = 0;
        } else if (i == 2) {
            r = 1, g = 166, b = 237;
        } else {
            r = 254, g = 186, b = 1;
        }
        SDL_SetRenderDrawColor(gRenderer, r, g, b, 255);
        SDL_Rect fillRect = {x, y, w, h};
        SDL_RenderFillRect(gRenderer, &fillRect);
    }

}

