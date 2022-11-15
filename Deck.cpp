#include "Deck.h"

Deck::Deck()
{
}

void Deck::addCard(Card* card)
{
	deck[index++] = card;

}

void Deck::shuffle()
{
	for (int i = 0; i < index; i++) {
		std::swap(deck[i], deck[random(0, index)]);
	}
}

Card* Deck::getCard(int i)
{
	return deck[i];
}
