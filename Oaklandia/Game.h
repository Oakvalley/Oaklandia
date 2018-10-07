#pragma once
#include "IntroState.h"
#include "GameStateManager.h"
#include <string>
#include <SFML\Graphics.hpp>


class Game
{
public:
	Game(int width, int height, const std::string& title);
	~Game();

	void update();
	void initialize();
	void handleEvents();
	void draw();
	bool running();
	void cleanUp();

private:
	bool m_running;
	int m_menuChoice;
	GameStateManager* m_gameStateManager;
	IntroState* m_introState;
	sf::RenderWindow* m_window;
	TextureManager* m_textureManager;
	sf::Clock* m_clock;
	sf::Time m_elapsed;
};