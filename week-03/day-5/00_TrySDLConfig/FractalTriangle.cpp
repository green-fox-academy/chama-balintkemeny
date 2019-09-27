#include "FractalTriangle.h"
#include <cmath>

void drawTriangle(SDL_Renderer* gRenderer, int x, int y, int side) {
    double pointA[2] = {(double)x, (double)y};
    double pointB[2] = {(double)x + (double)side, (double)y};
    double pointC[2] = {(double)x + (double)side / 2.0, (double)y + (double)side * sqrt(3.0) / 2.0};
    SDL_RenderDrawLine(gRenderer, (int)pointA[0], (int)pointA[1], (int)pointB[0], (int)pointB[1]);
    SDL_RenderDrawLine(gRenderer, (int)pointB[0], (int)pointB[1], (int)pointC[0], (int)pointC[1]);
    SDL_RenderDrawLine(gRenderer, (int)pointC[0], (int)pointC[1], (int)pointA[0], (int)pointA[1]);
}

void fractalTriangle(SDL_Renderer* gRenderer, int x, int y, int side, int minSide) {
    if (side > minSide) {
        double pointA[2] = {(double)x, (double)y};
        double pointB[2] = {(double)x + (double)side, (double)y};
        double pointC[2] = {(double)x + (double)side / 2.0, (double)y + (double)side * sqrt(3.0) / 2.0};
        SDL_RenderDrawLine(gRenderer, (int)pointA[0], (int)pointA[1], (int)pointB[0], (int)pointB[1]);
        SDL_RenderDrawLine(gRenderer, (int)pointB[0], (int)pointB[1], (int)pointC[0], (int)pointC[1]);
        SDL_RenderDrawLine(gRenderer, (int)pointC[0], (int)pointC[1], (int)pointA[0], (int)pointA[1]);
        fractalTriangle(gRenderer, x, y, side / 2, minSide);
        fractalTriangle(gRenderer, x + side / 2, y, side / 2, minSide);
        fractalTriangle(gRenderer, x + side / 4, (int)((double) y + (double)side * sqrt(3.0) / 4.0), side / 2, minSide);
    }
}

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    fractalTriangle(gRenderer, 0, 10, 800, 5);
}
