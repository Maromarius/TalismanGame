#include "Castle.h"
#include "Area.h"

const string Castle::NAME = "Castle";
const string Castle::DESCRIPTION = "Royal Doctor/n"
									"Heal up to your life value at the cost of one gold each. If you have the Prince or Princess, heal up to two lives for free./n";

Castle::Castle(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Castle::~Castle()
{
}

void Castle::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	char decision;
	cout<<"Would you like to heal yourself at the cost of 1 gold?(y/n)"<<endl;
	cin>>decision;

	if(decision=='y')
	{	
		character->replenishLives(0);
		if (character->hasThisFollower("Prince")||character->hasThisFollower("Princess"))
			character->replenishLives(2);
		character->loseGold(1);
	}
	else if(decision=='n')
		return;

	character->printStats();
	return;
}