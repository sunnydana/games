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
    if (cube.x + cube.w < 650) {
      cube.x += 1; // move right by one pixel every frame *make the sq  go right
                   // w/o stopping
    }

    SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
    SDL_RenderClear(renderer);

    SDL_Rect rect = {cube.x, cube.y, cube.w, cube.h};
    SDL_SetRenderDrawColor(renderer, 130, 0, 200, 0);
    SDL_RenderFillRect(renderer, &rect);

    SDL_RenderPresent(renderer);

    SDL_Delay(10); // pauses ~10 ms each frame so it looks smooth instead of
    // instantly zooming off the screen.
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


// SDL_Event event;
// SDL_Event is a special structure that holds information about things that
// happen, like Pressing a key Clicking a mouse Closing a window Moving the
// mouse Etc You use SDL_Event to listen for and handle user input.

while (SDL_PollEvent(&event)) {
"while there are still events waiting, grab the next one and handle it
inside the loop"
->checks if there's a new event(like key press, mouse click, or window close)
->if there's an event, SDL takes it out of the queue and puts the details
into the variable event.

 SDL_RenderClear(renderer);
This line clears the screen and paints the background with the current draw
color, so you can then draw new shapes on a clean surface.

SDL_Rect = {};
a struct in SDL that holds four integers:
{position on the screen, width and height}

SDL_RenderFillRect(renderer, &rect);
renderer -> canvas or whiteboard you're drawing on
&rect ->  the rectangle shape you want to draw (its position and size).
SDL_RenderFillRect -> takes the rectangle and fills it in with
the current draw color(set earlier with SDL_SetRenderDrawColor).
->This line draws a solid-colored rectangle on the screen at the spot
and size you told SDL in rect.

SDL_RenderPresent(renderer);
When you draw things in SDL(rectangles, lines, images,etc), they don't
instantly appear on the window.
Instead ,SDL draws them off-screen in a hidden "canvas"(this is called the
back buffer)
SDL_RenderPresent takes everything you've drawn on the hidden canvas
and shows it all at once on the window.
"update the window so the player can see what I just drew"

THE USUAL CYCLE IS
SDL_SetRenderDrawColor + SDL_RenderClear ->
erase screen, set background.
Draw Shapes(SDL_RenderFillRect, lines, images, etc.)
SDL_RenderPresent -> show it on the screen.

SDL_DestroyRenderer(renderer);
The renderer is like a drawing tool (a brush + canvas in memory)
When you're done with it, you should clean it up so your program
doesn't waste memory.
SDL_DestroyRenderer tells SDL: "I'm finished with this renderer,
free the memory and resources it was using."
->This line throws away the drawing tool once you're done, so your
programs stays tidy.

SDL_DestroyWindow(window);
The window is the actual box that shows up on your screen.
When your program ends, you don't want that window hanging around
or it's memory/resources still being used.
This line tells SDL:"Close this window and free all the resources it was using."
->This line closes the game window properly when you're done.

SDL_Quit();
-> shut down SDL completely.

So together:
SDL_DestroyRenderer(renderer); -> clean up the drawing tool.
SDL_DestroyWindow(window); -> close the actual window.
SDL_Quit(); -> shut down SDL completely.
*/