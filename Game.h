#pragma once
#include <SFML/Graphics.hpp>
#include "Config.h"
#include "Card.h"
#include "Deck.h"

class Game
{
	sf::RenderWindow window;
	sf::Event event;
	sf::Texture bgrTexture;
	sf::Sprite bgrSprite;
	Deck* deck = nullptr;
	void render();
	void update();
	void processEvent();
public:
	Game();
	void run();
	

};

