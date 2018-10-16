#include "IntroState.h"
#include "MenuState.h"
#include <iostream>


IntroState::IntroState() {
	m_test = new sf::Texture;
	m_sprite = new sf::Sprite;
	m_test2 = new sf::Texture;
	m_sprite2 = new sf::Sprite;
}


IntroState::~IntroState()
{
}

void IntroState::initialize(GameStateManager* p_gameStateManager) {
	m_test->loadFromFile("../Textures/test.png");
	m_test2->loadFromFile("../Textures/inventory.png");


	//p_gameStateManager->getTextureManager()->load(m_test2, m_sprite2);
	//p_gameStateManager->getTextureManager()->load(m_test, m_sprite);

	m_sprite->setPosition(15.0f, 10.0f);
}

void IntroState::update(GameStateManager* p_state, sf::RenderWindow* p_window, InputManager* p_input, float dt) {

}

void IntroState::handleEvents(sf::RenderWindow* p_window, GameStateManager* p_gameStateManager, InputManager* p_input) {
	sf::Event event;
	while (p_window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			p_window->close();
		}
		if (event.type == sf::Event::KeyPressed) {
			if (event.key.code == sf::Keyboard::Enter) {
				//p_gameStateManager->changeState(new MenuState);
			}
		}
		if (p_input->isKeyPressed(p_input->Enter)) {
			p_gameStateManager->changeState(new MenuState);
		}
	}
	
}

void IntroState::draw(TextureManager* p_textureManager) {

}

void IntroState::clean() {

}

void IntroState::showUI() {

}