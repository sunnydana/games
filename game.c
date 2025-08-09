#include <SDL.h>
#include <stdbool.h> //for bool to work
#include <stdio.h>

typedef struct { // typedef is for a shortcut name for a data type to make code
                 // easier to read. (keeps you from having to use struct
                 // everytime)
  int x;
  int y;
  int w;
  int h;
} Player;

void drawCircle(SDL_Renderer *renderer, int centerX, int centerY, int radius) {
  for (int w = 0; w < radius * 2; w++) {
    for (int h = 0; h < radius * 2; h++) {
      int dx =
          radius -
          w; // how far a pixel is from the center of the circle horizontally
      int dy = radius - h; //& vertically
      if ((dx * dx + dy * dy) <=
          (radius * radius)) { // checks if the pixel is inside the circle.
        SDL_RenderDrawPoint(
            renderer, centerX + dx,
            centerY + dy); // if the point is inside the circle, this draws it
                           // on the screen at the right place.
      }
    }
  }
}

bool checkCollision(Player a, Player b) {
  return (a.x < b.x + b.w && // left edge of a is left of right edge of b
          a.x + a.w > b.x && // right edge of a is right of left edge of b
          a.y < b.y + b.h && // top edge of a is above bottom edge of b
          a.y + a.h > b.y    // bottom edge of a is below top edge of b
  );
}

int main() {
  printf("Hola Miguel, this is my first c game!");

  SDL_Init(SDL_INIT_VIDEO); // initializes the SDL library so you can use it to
                            // create a window, draw graphics, or do other
                            // video-related things.
  SDL_Window *window = SDL_CreateWindow(
      "Dodge Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 650, 490,
      0); // Creates a window on the screen where your game(or graphics) will
          // appear.
  SDL_Renderer *renderer = SDL_CreateRenderer(
      window, -1, 0); // Creates a "renderer" -a tool that draws things on your
                      // window(like shapes,images,etc).

  Player player; // creates a variable called player of type Player
  player.x = 0;  // x coordinates on screen
  player.y = 0;  // y coordinates on screen
  player.w = 20; // width
  player.h = 80; // height

  Player player2;
  player2.x = 630;
  player2.y = 230;
  player2.w = 20;
  player2.h = 80;

  Player cube;
  cube.x = 300;
  cube.y = 230;
  cube.w = 10;
  cube.h = 10;

  int direction = 1; // 0 goes left, 1 goes right

  int rightPaddleDirection = 1; // 0 : up, 1 : down

  bool running =
      true; // created a boolean variable running and set it's value to true
  SDL_Event event; // created a variable called event of type SDL_Event

  while (running) {
    if (direction == 1) {
      cube.x = cube.x + 1;
      if (cube.x > 620) {
        direction = 0;
      }
    }
    if (direction == 0) {  // cube should go left
      cube.x = cube.x - 1; // cube goes to the left by 1 pixel
      bool collisionDetected = checkCollision(player, cube);
      if (collisionDetected) { // check if cube reached left side of the screen
        direction = 1;         // go right
      }

      if (rightPaddleDirection == 1) {
        player2.y = player2.y + 1;
        if (player2.y > 400) {
          rightPaddleDirection = 0;
        }
      }
      if (rightPaddleDirection == 0) {
        player2.y = player2.y - 1;
        bool collisionDetected = checkCollision(player2, cube);
        if (collisionDetected) {
          direction = 1;
        }
      }
    }
    // TO DO: if direction is 0 make it go to the left

    // IF CUBE IS MOVING TO THE RIGHT THEN RIGHT PADDLE MOVES INTO THE DIRECTION
    // OF THE CUBE
    while (SDL_PollEvent(&event)) { // checks the SDL event queue to see if any
                                    // events(like user actions) have happened.
      if (event.type == SDL_QUIT)
        running = false; // if the user tries to close the window(clicks the X),
                         // then stop the game loop.
      if (event.type == SDL_KEYDOWN) { // if the user pressed a key down, run
                                       // the code inside this block.
        // if (event.key.keysym.sym == SDLK_LEFT) {
        //    if(player.x > 0){
        //    player.x = player.x - 30;//if the left arrow key is pressed, move
        //    the player 30 pixels to the left.
        // }
        // }

        if (event.key.keysym.sym == SDLK_RIGHT) {
          if (player.x < 580) {
            player.x = player.x + 10;
          }
        } // if the right arrow key is pressed, move the player 30 pixels to the
          // right.

        if (event.key.keysym.sym == SDLK_UP) {
          if (player.y > 0) {
            player.y = player.y - 10;
          }
        }
        // if the up arrow key is pressed, move the player 30 pixels upward.
        if (event.key.keysym.sym == SDLK_DOWN)
          if (player.y < 430) {
            player.y = player.y + 10;
          } // if the down arrow key is pressed, move the player 30 pixels
            // downward.
      }
    }
    // && player.x < 0

    SDL_SetRenderDrawColor(
        renderer, 0, 255, 0,
        0); // Set the drawing color to black (with full transparency), so
            // future things (like the background or shapes) will be drawn using
            // this color.
    SDL_RenderClear(renderer); // Clear the screen (or window) and fill it with
                               // the current draw color.

    SDL_Rect rect = {player.x, player.y, player.w,
                     player.h}; // Create an SDL rectangle called rect that has
                                // the same position and size as the player.
    SDL_SetRenderDrawColor(
        renderer, 0, 0, 255,
        0); // Set the drawing color to blue, with full transparency
    SDL_RenderFillRect(
        renderer,
        &rect); // Draw a filled rectangle on the screen using the current draw
                // color, in the position and size of rect.

    SDL_Rect rect2 = {player2.x, player2.y, player2.w, player2.h};
    SDL_SetRenderDrawColor(renderer, 255, 0, 0, 255);
    SDL_RenderFillRect(renderer, &rect2);

    SDL_Rect rect3 = {cube.x, cube.y, cube.w, cube.h};
    SDL_SetRenderDrawColor(renderer, 128, 0, 0, 128);
    SDL_RenderFillRect(renderer, &rect3);

    SDL_RenderPresent(
        renderer); // Final step in rendering - it displays everything you've
                   // drawn this frame onto the window.
    SDL_Delay(16); // Pause the program for 16 millionseconds.
  }

  SDL_DestroyRenderer(renderer); // Free the memory used by the renderer and
                                 // clean up when you're done using it.
  SDL_DestroyWindow(
      window); // Destroy the SDL window and free the memory used by it.
  SDL_Quit();  // Shut down SDL completely and clean up all the systems it
              // initialized(like video,audio,input,etc).

  // 255, 0, 0, 255)
  // adjust so square doesn't go past screen
  return 0;
}

// 15
// initializes the SDL library so you can use it to create a window,
//  draw graphics,or do other video-related things.
//  (SDL_Init->Function that prepares SDL for use.
//  SDL_INIT_VIDEO-> This tells SDL: "I want to use the video part of SDL")
// This line tells SDL: "Get ready! I want to work with graphics (like creating
// a window or displaying things.)"

// 16
//  SDL_Window* window -> sets up a varibale named window that will point to
//  (hold the address of) the window you create. window = a box that stores the
//  window you just made, so you can use it later(for drawing, closing, etc)
// SDL_CreateWindow(...) ->This function actually makes the window
// inside ()
//  ("Dodge Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 650, 490, 0)
//"Dodge Game" -> title of the window(You'll see this text at the top of the
//window) SDL_WINDOWPOS_CENTERED -> X position SDL_WINDOWPOS_CENTERED -> Y
// position
//  650 -> Width of the window
//  490 -> Height of the window
//  0 -> Special flags(0 means no extra options)
//    Creates a window titled 'Dodge Game', centers it on the screen, makes it
//    650×490 pixels,
//     and gives you a way to refer to it using the window variable.

// 17
// SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);
// 🧱 What’s a renderer?
// Think of your window as a blank canvas 🎨, and the renderer is your
// paintbrush 🖌️. You must have a renderer if you want to draw anything on the
// screen (like your game graphics).

// SDL_Renderer* renderer         // This creates a variable to store your
// renderer. SDL_CreateRenderer(...)        // This function actually creates
// the renderer.

//(window,                      // Which window to draw on? (use the one we
//created earlier)
// -1,                          // Let SDL choose the best graphics driver
//  0)                          // No special settings (basic renderer)

// Line 17 says:
//"Give me a drawing tool (renderer) for this window so I can start putting
//things on the screen!" And it stores that tool in the variable renderer, which
// you’ll use later to do things like: Clear the screen Draw rectangles, images,
// text Update the screen

// 25
// bool running = true;
// It's often used in things like game loops or programs that run continuously
// until the user quits: while (running) {
//  game logic
// }
// You can then stop the loop by doing:
// running = false;

// 26
// SDL_Event event;
// SDL_Event is a special structure that holds information about things that
// happen, like Pressing a key Clicking a mouse Closing a window Moving the
// mouse Etc You use SDL_Event to listen for and handle user input.

// 29
//  If there is an event, it:
//  Copies it into the event variable.
//  Returns 1 (true), so the loop runs.
//  If there are no more events, it returns 0 (false), and the loop stops.

// 30
//  event.type is the type of event that just happened
//  SDL_QUIT is a special event that SDL sends when the user clicks the close
//  button on the window running = false; sets your game loop to false, so the
//  loop ends. 🧠 So this is how you let the user gracefully exit your SDL
//  program by closing the window.

// 31
//  SDL_KEYDOWN is an event type that SDL uses when any key is pressed on the
//  keyboard(but not released yet).
// It works inside the SDL event loop

// 32
//  event.key.keysym.sym   tells you which key was pressed.
//  SDLK_LEFT    means the left arrow key.
//  player.x -= 30;   decreases the player's X position by 30, which moves them
//  left on the screen.

// 33
//  event.key.keysym.sym checks which key was pressed
//  SDLK_RIGHT is the right arrow key
//  player.x += 30; increases the player's X position by 30, so the player moves
//  right on the screen.

// 35
//  event.key.keysym.sym tells which key was pressed.
//  SDLK_UP is the up arrow
//  player.y -= 30; decreases the player's y position, which moves the player up
//  on the screen
//   (because in SDL, the top-left is (0,0), and Y increases as you go down).

// 36
//  event.key.keysym.sym checks which key was pressed.
//  SDLK_DOWN means the down arrow.
//  player.y += 30; increases the player's vertical position, so the player
//  moves down on the screen

// Why y increases when going down?
//  In SDL (and most 2D graphics systems):

// (0, 0) is the top-left corner of the screen.

// As you go down, y increases.

// As you go right, x increases.

// 40
//  renderer : The SDL renderer you're using to draw.
//  R, G, B : Red, Green, Blue color values (0-255)
//  A : Alpha (transparency), also 0-255

// 41
//  Goes after SDL_SetRenderDrawColor(renderer, R, G, B, A);
//  That sets the color that SDL_RendererClear will use to fill the entire
//  screen.

// 43
//  SDL_Rect is a structure used by SDL to define a rectangle. It has 4 parts:
//   x = player.x  -> Horizontal position
//   y = player.y  -> Vertical position
//   w = player.w  -> Width
//   h = player.h  -> Height

// 44
//  SDL_SetRanderDrawColor(randerer, R, G, B, A);
//  0, 0, 255 = Blue
//  0 = Alpha (transparency) - fully transparent
//  So this sets the drawing color to transparent blue

// 45
//  renderer: Your SDL renderer (the thing that handles drawing)
//  &rect: A pointer to an SDL_Rect that defines:
//  a x and y -> the position (top-left corner)
//  w and h -> the width and height
//  It uses whatever color you last set with SDL_SetRanderDrawColor()

// 47
//  SDL does double buffering:
//  You draw everything to a hidden screen(back buffer)
//  SDL_RenderPresent(renderer); shows that hidden screen on the actual
//  window(front buffer)

// 48
//  16 ms because 16 miliseconds = 1/60th of a second, and most games aim for 60
//  frames
// per second(FPS)
//  SDL_Delay(16); is often used to:
//  Slow down the loop so the game doesn't run too fast
//  Help control frame rate

// 51
// When your program ends, SDL doesn't automatically free all the memory it
// used.
// So you should manually destroy:
// the renderer
// the window
// and quit SDL
// to avoid memory leaks or crashes

// 52
//  When you're done with your SDL window(usually at the end of your program),
//  you need to clean it up manually.
// If  you don't call this, your program might leak memory or leave system
// resources open.

// 53
// When you're done with SDL program, you must call SDL_Quit(to):
// Free memory
// Close devices(like window, keyboard, mouse, etc.)
// Avoid crashes or resource leaks.
//  Call it at the very end of your program after:
// SDL_DestroyRenderer(renderer);
// SDL_DestroyWindow(window);

/* code without comments


#include <stdio.h>
#include <SDL.h>
#include <stdbool.h>

typedef struct {
    int x;
    int y;
    int w;
    int h;
} Player;

int main(){
    printf("Hola Miguel, this is my first c game!");

    SDL_Init(SDL_INIT_VIDEO);
    SDL_Window* window = SDL_CreateWindow("Dodge Game", SDL_WINDOWPOS_CENTERED,
SDL_WINDOWPOS_CENTERED, 650, 490, 0); SDL_Renderer* renderer =
SDL_CreateRenderer(window, -1, 0);

    Player player;
    player.x = 300;
    player.y = 400;
    player.w = 50;
    player.h = 50;

    bool running = true;
    SDL_Event event;

    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) running = false;
            if (event.type == SDL_KEYDOWN) {
                if (event.key.keysym.sym == SDLK_LEFT) player.x -= 30;
                if (event.key.keysym.sym == SDLK_RIGHT) player.x += 30;

                if (event.key.keysym.sym == SDLK_UP) player.y -= 30;
                if (event.key.keysym.sym == SDLK_DOWN) player.y += 30;
            }
        }

        SDL_SetRenderDrawColor(renderer, 0, 0, 0, 0);
        SDL_RenderClear(renderer);

        SDL_Rect rect = { player.x, player.y, player.w, player.h };
        SDL_SetRenderDrawColor(renderer, 0 , 0 , 255, 0);
        SDL_RenderFillRect(renderer, &rect);

        SDL_RenderPresent(renderer);
        SDL_Delay(16);
    }

    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return 0;

}
*/