#include <memory>

#include "Game.h"

int main() {

	Game* game{ new Game{ 1280, 720 } };

	game->run();

	delete game;

}