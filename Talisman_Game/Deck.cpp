#include "Deck.h"

Deck::Deck(void)
{
}

void Deck::add(Card c)
{
	cards.push_back(c);
}

Card Deck::draw(void){
	if(cards.empty())
		redeal();
	Card temp = cards.back();
	cards.pop_back();
	return temp;
}

void Deck::discard(Card c){
	discardPile.push_back(c);
}

void Deck::shuffle(){
	srand(time(NULL));
	random_shuffle(this->cards.begin(), this->cards.end());
}

void Deck::redeal(void){	
	for(int i = 0; i < discardPile.size(); i++){
		Card temp = discardPile.back();
		discardPile.pop_back();
		cards.push_back(temp);
	}
	this->shuffle();	
}

Deck::~Deck(void)
{
}
