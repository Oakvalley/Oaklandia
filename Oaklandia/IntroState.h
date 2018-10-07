#pragma once
#include "State.h"
class IntroState : public State {
public:
	IntroState();
	~IntroState();

	void update(GameStateManager*, float elapsedTime);
	void initialize(GameStateManager*);
	void handleEvents(sf::RenderWindow* p_window, GameStateManager*);
	void draw(TextureManager*);
	void clean();

private:
	void showUI();
	int m_input;
	sf::Texture* m_test;
	sf::Sprite* m_sprite;
	sf::Texture* m_test2;
	sf::Sprite* m_sprite2;
};

