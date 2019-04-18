#include <SDL2/SDL.h>
#include <iostream>
#include <cassert>

int main(int argc, char** argv)
{
    if(SDL_Init(SDL_INIT_EVERYTHING) < 0)
    {
        std::cerr << "SDL_Init fuckup: " << SDL_GetError() << std::endl;
        return EXIT_FAILURE;
    }

    SDL_Window* win = SDL_CreateWindow("NoSecGB", 0, 0, 640, 480, 0);
    assert(win != nullptr); //quick and dirty since this is just making sure SDL works
    
    bool fuckoff = false;

    while(!fuckoff)
    {
        SDL_Event evnt;
        while(SDL_PollEvent(&evnt))
        {
            if (evnt.type == SDL_QUIT)
            {
                fuckoff = true;
            }
        }
    }

    SDL_DestroyWindow(win);
    SDL_Quit();

    return 0;


}
