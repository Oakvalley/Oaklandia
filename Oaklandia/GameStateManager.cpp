#include "GameStateManager.h"



GameStateManager::GameStateManager() {
	m_textureManager = new TextureManager;
	m_mouse = new Mouse;
}

//Will push state back of vector, if in one state, will clean it up and remove it.
void GameStateManager::changeState(State* p_state) {
	if (!m_gameStates.empty()) {
		m_gameStates.back()->clean();
		m_gameStates.pop_back();
		m_textureManager->clean();
	}
	m_gameStates.push_back(p_state);
	m_gameStates.back()->initialize(this);
}

//Will remove everything from the vector, until empty.
void GameStateManager::clear()
{
	while (!m_gameStates.empty()) {
		m_gameStates.back()->clean();
		m_gameStates.pop_back();
	}
}

//keep current state, and go to next.
void GameStateManager::pushState(State* p_state) {
	m_gameStates.push_back(p_state);
	m_gameStates.back()->initialize(this);
}

//Leave current state and go back to last one. Will remove current state.
void GameStateManager::popState() {
	m_gameStates.pop_back();
}

void GameStateManager::update(GameStateManager* p_state, sf::RenderWindow* p_window, float elapsedTime) {
	m_gameStates.back()->update(this, p_window, elapsedTime);
}

void GameStateManager::initialize(GameStateManager* p_state) {
	m_gameStates.back()->initialize(this);
}

void GameStateManager::handleEvents(sf::RenderWindow* p_window, GameStateManager* p_gameStateManager) {
	m_gameStates.back()->handleEvents(p_window, p_gameStateManager);
}

void GameStateManager::draw(sf::RenderWindow* p_window) {
	m_textureManager->draw(p_window);
}