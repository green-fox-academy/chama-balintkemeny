#include "FractalTriangle.h"
#include <cmath>

void drawCircle(SDL_Renderer* renderer, int32_t centreX, int32_t centreY, int32_t radius)
{
    const int32_t diameter = (radius * 2);

    int32_t x = (radius - 1);
    int32_t y = 0;
    int32_t tx = 1;
    int32_t ty = 1;
    int32_t error = (tx - diameter);

    while (x >= y)
    {
        //  Each of the following renders an octant of the circle
        SDL_RenderDrawPoint(renderer, centreX + x, centreY - y);
        SDL_RenderDrawPoint(renderer, centreX + x, centreY + y);
        SDL_RenderDrawPoint(renderer, centreX - x, centreY - y);
        SDL_RenderDrawPoint(renderer, centreX - x, centreY + y);
        SDL_RenderDrawPoint(renderer, centreX + y, centreY - x);
        SDL_RenderDrawPoint(renderer, centreX + y, centreY + x);
        SDL_RenderDrawPoint(renderer, centreX - y, centreY - x);
        SDL_RenderDrawPoint(renderer, centreX - y, centreY + x);

        if (error <= 0)
        {
            ++y;
            error += ty;
            ty += 2;
        }

        if (error > 0)
        {
            --x;
            tx += 2;
            error += (tx - diameter);
        }
    }
}

void fractalCircles(SDL_Renderer* gRenderer, int centreX, int centreY, int radius, int minRadius) {
    drawCircle(gRenderer, centreX, centreY, radius);
    if (radius > minRadius) {
        fractalCircles(gRenderer, centreX, centreY - radius / 2, radius / 2, minRadius);
        fractalCircles(gRenderer, centreX - (int)(radius * sqrt(3.0) / 4), centreY + radius / 4, radius / 2, minRadius);
        fractalCircles(gRenderer, centreX + (int)(radius * sqrt(3.0) / 4), centreY + radius / 4, radius / 2, minRadius);
    }
}

void draw(SDL_Renderer* gRenderer) {
    SDL_SetRenderDrawColor(gRenderer, 0, 0, 0, 255);
    fractalCircles(gRenderer, 400, 400, 375, 5);
}

