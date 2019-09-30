#include "FractalTriangle.h"
#include <cmath>


void drawATree(SDL_Renderer* gRenderer, int base[2], int height, int angle) {
    double pi = acos(-1);
    double rotation_angle = (double)angle / 180.0 * pi;
    double varSin = sin(rotation_angle);
    double varCos = cos(rotation_angle);
    SDL_RenderDrawLine(gRenderer, base[0], base[1], base[0], base[1] + height);

}

void draw(SDL_Renderer* gRenderer) {
    //Set Accord color (0x4CC02D)
    SDL_SetRenderDrawColor(gRenderer, 76, 192, 45, 255);

}
