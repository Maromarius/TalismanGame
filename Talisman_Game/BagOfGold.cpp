#include "BagOfGold.h"


BagOfGold::BagOfGold(void)
{
	NAME = "Bag of Gold";
	DESCRIPTION = "Exchange immediately for 1 gold and then place this card on the discard pile.";
	encounterNumber = 5;
}


BagOfGold::~BagOfGold(void)
{
}

void BagOfGold:: effect(Character c){
	c.gainGold(1);
}