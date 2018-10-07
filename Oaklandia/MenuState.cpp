#include "MenuState.h"
#include <iostream>


MenuState::MenuState() {
}


MenuState::~MenuState() {
}

void MenuState::update(GameStateManager* p_state, float elapsedTime) {
}

void MenuState::initialize(GameStateManager* p_gameStateManager) {
	std::cout << "MenuState init" << std::endl;
}

void MenuState::handleEvents(sf::RenderWindow* p_window, GameStateManager* p_gameStateManager) {
	sf::Event event;
	while (p_window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			p_window->close();
		}
	}
}

void MenuState::draw(TextureManager* p_textureManager) {

}

void MenuState::drawUI() {

}

void MenuState::clean() {

}