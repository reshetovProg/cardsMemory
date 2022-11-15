#include "Game.h"

Game::Game():
	window(sf::VideoMode(W_WIDTH, W_HEIGHT), "card memory",sf::Style::Close)
{
	bgrTexture.loadFromFile(BACK_URL);
	//bgrSprite.setScale(W_WIDTH, W_HEIGHT);
	bgrSprite.setTexture(bgrTexture);
	card1 = new Card("10", "p");


}
void Game::run()
{
	while (window.isOpen()) {
		processEvent();
		update();
		render();
	}
	
}


void Game::render()
{
	window.clear();
	window.draw(bgrSprite);
	card1->draw(window);
	window.display();
}

void Game::update()
{
}

void Game::processEvent()
{
	while (window.pollEvent(event)) {
		if (event.type == sf::Event::Closed) {
			window.close();
		}
	}
}



