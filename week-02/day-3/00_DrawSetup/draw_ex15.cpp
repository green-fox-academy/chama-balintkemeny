//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"

void ConnectTheDots (SDL_Renderer* gRenderer, int len, int coord[][2]) {
    for (int i = 0; i < len; ++i) {
        if (i != len - 1) {
            SDL_RenderDrawLine(gRenderer, coord[i][0], coord[i][1], coord[i + 1][0], coord[i + 1][1]);
        } else {
            SDL_RenderDrawLine(gRenderer, coord[i][0], coord[i][1], coord[0][0], coord[0][1]);
        }
    }
}

void draw(SDL_Renderer* gRenderer) {

    int lenArr1 = 4;
    int coordArr1[4][2] = {{10, 10}, {290, 10}, {290, 290}, {10, 290}};
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    ConnectTheDots(gRenderer, lenArr1, coordArr1);

    int lenArr2 = 8;
    int coordArr2[8][2] = {{50, 100}, {70, 70}, {80, 90}, {90, 90}, {100, 70}, {120, 100}, {85, 130}, {50, 100}};
    SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
    ConnectTheDots(gRenderer, lenArr2, coordArr2);

}
