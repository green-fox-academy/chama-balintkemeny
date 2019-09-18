 #include "draw.h"

 void draw(SDL_Renderer* gRenderer) {
     SDL_SetRenderDrawColor(gRenderer, 255, 0, 0, 255);
     SDL_RenderDrawLine(gRenderer, 0, SCREEN_HEIGHT / 2, SCREEN_WIDTH, SCREEN_HEIGHT / 2);

     SDL_SetRenderDrawColor(gRenderer, 0, 255, 0, 255);
     SDL_RenderDrawLine(gRenderer, SCREEN_WIDTH / 2, 0, SCREEN_WIDTH / 2, SCREEN_HEIGHT);
 }
