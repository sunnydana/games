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
    SDL_Window* window = SDL_CreateWindow("Dodge Game", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 650, 490, 0);
    SDL_Renderer* renderer = SDL_CreateRenderer(window, -1, 0);

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

    //255, 0, 0, 255)
    //adjust so square doesn't go past screen
    return 0;
}