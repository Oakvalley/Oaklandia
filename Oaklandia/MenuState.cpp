#include "MenuState.h"
#include <iostream>
#include "PlayState.h"


MenuState::MenuState() : m_hover(false) {
	m_startButtonTexture = new sf::Texture;
	m_startButton = new sf::Sprite;
	
}


MenuState::~MenuState() {
}

void MenuState::update(GameStateManager* p_state, sf::RenderWindow* p_window, InputManager* p_input, float elapsedTime) {
	sf::FloatRect test = m_startButton->getGlobalBounds();

	if (test.contains(p_input->getMousePosition(p_window))) {
		m_hover = true;
	}	
}

void MenuState::initialize(GameStateManager* p_gameStateManager) {
	m_startButtonTexture->loadFromFile("../Textures/Start.png");

	//p_gameStateManager->getTextureManager()->load(m_startButtonTexture, m_startButton);
	
	//m_startButton->setPosition(100.0f, 100.0f);

}

void MenuState::handleEvents(sf::RenderWindow* p_window, GameStateManager* p_gameStateManager, InputManager* p_input) {
	sf::Event event;
	while (p_window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			p_window->close();
		}
		if (m_hover && p_input->isMouseButtonPressed(p_input->Left)) {
			p_gameStateManager->changeState(new PlayState);
			m_hover = false;
		}

	}
}

void MenuState::draw(TextureManager* p_textureManager) {

}

void MenuState::drawUI() {

}

void MenuState::clean() {

}