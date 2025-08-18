#include <SDL.h>
#include <stdbool.h>
#include <stdio.h>

// struct for square
typedef struct {
  int x;
  int y;
  int w;
  int h;
} Cube;

int main() {
  SDL_Init(SDL_INIT_VIDEO);
  SDL_Window *window = SDL_CreateWindow("Cube", SDL_WINDOWPOS_CENTERED,
                                        SDL_WINDOWPOS_CENTERED, 650, 490, 0);
  SDL_Renderer *renderer = SDL_CreateRenderer(window, -1, 0);

  Cube cube;
  cube.x = 295;
  cube.y = 215;
  cube.w = 50;
  cube.h = 50;

  bool running = true;
  SDL_Event event; // variable

  while (running) {
    while (SDL_PollEvent(&event)) {
      if (event.type == SDL_QUIT) {
        running = false;
      }
    }
    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);
    SDL_Rect rect = {cube.x, cube.y, cube.w, cube.h};
    SDL_SetRenderDrawColor(renderer, 130, 0, 200, 0);
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);
  }

  SDL_DestroyRenderer(renderer);
  SDL_DestroyWindow(window);
  SDL_Quit();

  return 0;
}
/*
What is needed to get the window to appear
*/
/*
6
SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 650, 490, 0
-"put window in the center of the screen"
The first one is for the X position (left/right)
The second one is for the Y position (up/down)

650 - The width of the window pixels.
490 - the height of the window pixels.
0 - Special flags for extra window options(like fullscreen, resiazable, etc).
Here 0 means "just a normal plain window" with no extra features.

Create a window named Dodge Game, center it on the screen, make it 650 pixels
wide and 490 pixels tall, and keep it as a normal window with no special modes.

7
SDL_Renderer *renderer -> You're making a variable named renderer
that will store SDL's drawing tool.
SDL_CreateRenderer(...) -> This is the function that actually creates
the drawing tool.
Inside the () :
window  -> The window you want to draw into (the one you made earlier).
-1 -> Means "pick the first graphics driver that works"
we let SDL choose automatically.
0 -> No special options; use normal/default rendering.
"Make me a drawing tool for this window so I can actually put stuff on the
screen". If you left this out, your SDL window would just be an empty,
unpaintable box.



When creating something like a square in c it's best to go with a struct
because..
It groups related data together (x position, y-position, width, height)
Its easier to expand later(if you want to add something to your square
such as color, speed, or direction)
*/