#include "Game.h"

int main() {
	Game game(1024, 768, "Oaklandia");
	while (game.running()) {
		game.handleEvents();
		game.update();
		game.draw();
	}

	game.cleanUp();
	return 0;
}