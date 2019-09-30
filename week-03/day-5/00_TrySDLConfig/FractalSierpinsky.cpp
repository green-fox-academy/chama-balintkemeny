#include "FractalTriangle.h"

void fractalSierpinsky(SDL_Renderer* gRenderer, int x, int y, int side, int minSide) {
    if (side > minSide) {
        SDL_Rect fillRect = {x, y, side, side};
        SDL_RenderFillRect(gRenderer, &fillRect);
        fractalSierpinsky(gRenderer, x - 2 * side / 3, y - 2 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x + 1 * side / 3, y - 2 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x + 4 * side / 3, y - 2 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x - 2 * side / 3, y + 1 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x + 4 * side / 3, y + 1 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x - 2 * side / 3, y + 4 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x + 1 * side / 3, y + 4 * side / 3, side / 3, minSide);
        fractalSierpinsky(gRenderer, x + 4 * side / 3, y + 4 * side / 3, side / 3, minSide);
    }
}

void draw(SDL_Renderer* gRenderer) {
    //Set Accord color (0x4CC02D)
    SDL_SetRenderDrawColor(gRenderer, 76, 192, 45, 255);
    fractalSierpinsky(gRenderer, 300, 300, 300, 1);
}
