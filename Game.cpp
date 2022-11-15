#include "Game.h"

Game::Game():
	window(sf::VideoMode(W_WIDTH, W_HEIGHT), "card memory",sf::Style::Fullscreen)
{
	bgrTexture.loadFromFile(BACK_URL);
	float k = W_WIDTH / bgrTexture.getSize().x;
	bgrSprite.scale(k, k);
	bgrSprite.setTexture(bgrTexture);

	/*Card* card1 = new Card("6", "k");
	Card* card2 = new Card("7", "p");
	Card* card3 = new Card("8", "p");
	Card* card4 = new Card("10", "p");
	Card* card5 = new Card("k", "k");
	Card* card6 = new Card("q", "p");
	Card* card7 = new Card("t", "k");
	Card* card8 = new Card("v", "k");*/
	deck = new Deck;
	deck->addCard(new Card("6", "k"));
	deck->addCard(new Card("7", "p"));
	deck->addCard(new Card("8", "p"));
	deck->addCard(new Card("10", "p"));
	deck->addCard(new Card("k", "k"));
	deck->addCard(new Card("q", "p"));
	deck->addCard(new Card("t", "k"));
	deck->addCard(new Card("v", "k"));
	deck->shuffle();
	//deck[0]
	


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
	Card* card = deck->getCard(0);
	card->draw(window);
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
		else if (event.type == sf::Event::KeyPressed) {
			if (event.key.code == sf::Keyboard::Escape) {
				window.close();
			}
		}
		

	}
}



