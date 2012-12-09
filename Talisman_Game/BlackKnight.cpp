#include "BlackKnight.h"
#include "Area.h"

const string BlackKnight::NAME = "Black Knight";
const string BlackKnight::DESCRIPTION = "You Must/n"
										"Either give up 1 Gold Coin (discarding it on the stockpile) or lose 1 Life.\n";

BlackKnight::BlackKnight(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

BlackKnight::~BlackKnight()
{
}

void BlackKnight::effect(Character character)
{
	char decision;
	cout<<"Would you like to give up a gold or lose a life?(g/l)"<<endl;
	cin>>decision;

	if(decision=='g')
		character.loseGold(1);
	else if(decision=='l')
		character.loseLive(1);

	character.printStats();
	return;
}