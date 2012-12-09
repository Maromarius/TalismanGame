#ifndef DECK_H
#define DECK_H
#include "Card.h"
#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>
#include <ctime>
#include <cstdlib>
using namespace std;

class Deck
{
public:
	Deck(void);
	~Deck(void);
	void add(Card);
	Card draw(void);
	void shuffle(void);
	void discard(Card);
	void redeal(void);
	vector<Card> cards;
	vector<Card> discardPile;
};
#endif

