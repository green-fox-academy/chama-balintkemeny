//
// Created by Kemény Bálint on 2019. 09. 18..
//
#include "draw.h"
void goToCenter (SDL_Renderer* renderer, int x, int y);

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    int x = 50;
    int y = 50;
    for (int i = 0; i < 5; ++i) {
        goToCenter(gRenderer, x, y);
        x += 50;
    }

}

void goToCenter (SDL_Renderer* renderer, int x, int y) {
    SDL_RenderDrawLine(renderer, x, y, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2);
}
