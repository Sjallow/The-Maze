#include "../headers/header.h"

/**
 * handleInput - process input from thw keyboard
 *
*/

void handleInput(void)
{
	SDL_Event event;

	SDL_PollEvent(&event);

	switch (event.type)
	{
		case SDL_QUIT:
		{
			GameRunning = false;
			break;
		}
		case SDL_KEYDOWN:
		{
			if (event.key.keysym.sym == SDLK_ESCAPE)
				GameRunning = false;
			if (event.key.keysym.sym == SDLK_UP)
				player.walkDirection = +1;
			if (event.key.keysym.sym == SDLK_DOWN)
				player.walkDirection = -1;
			if (event.key.keysym.sym == SDLK_RIGHT)
				player.turnDirection = +1;
			if (event.key.keysym.sym == SDLK_LEFT)
				player.turnDirection = -1;
			if (event.key.keysym.sym == SDLK_w)
				player.walkDirection = +1;
			if (event.key.keysym.sym == SDLK_s)
				player.walkDirection = -1;
			if (event.key.keysym.sym == SDLK_a)
				player.turnDirection = -1;
			if (event.key.keysym.sym == SDLK_d)
				player.turnDirection = +1;
			break;
		}
		case SDL_KEYUP:
		{
			if (event.key.keysym.sym == SDLK_UP)
				player.walkDirection = 0;
			if (event.key.keysym.sym == SDLK_DOWN)
				player.walkDirection = 0;
			if (event.key.keysym.sym == SDLK_RIGHT)
				player.turnDirection = 0;
			if (event.key.keysym.sym == SDLK_LEFT)
				player.turnDirection = 0;
			if (event.key.keysym.sym == SDLK_w)
				player.walkDirection = 0;
			if (event.key.keysym.sym == SDLK_s)
				player.walkDirection = 0;
			if (event.key.keysym.sym == SDLK_a)
				player.turnDirection = 0;
			if (event.key.keysym.sym == SDLK_d)
				player.turnDirection = 0;
			break;
		}
	}
}
