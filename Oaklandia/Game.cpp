#include "Game.h"
#include <iostream>


Game::Game(int width, int height, const std::string& title) : m_running(true), m_menuChoice(0) {
	m_gameStateManager = new GameStateManager;
	m_introState = new IntroState;
	m_window = new sf::RenderWindow(sf::VideoMode(width, height), title);
	m_gameStateManager->changeState(m_introState);
	m_clock = new sf::Clock;
}


Game::~Game()
{
}

void Game::handleEvents() {
	sf::Event event;

	while (m_window->pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			m_window->close();
		}
	}
	m_gameStateManager->handleEvents(m_window, m_gameStateManager);
}

void Game::update() {
	m_gameStateManager->update(m_gameStateManager, m_elapsed.asSeconds());
}

void Game::initialize() {
	m_gameStateManager->initialize(m_gameStateManager);
}

void Game::draw() {
	m_window->clear();
	m_gameStateManager->draw(m_window);
	m_window->display();
}

bool Game::running() {
	while (m_window->isOpen()) {
		return m_running;
	}
	m_running = false;

	return m_running;
}

void Game::cleanUp() {
	delete m_gameStateManager;
	delete m_introState;
	delete m_window;
}