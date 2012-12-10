#include "Woods.h"
#include "Area.h"

const string Woods::NAME = "Woods";
const string Woods::DESCRIPTION =	"Draw 1 Card.\n"
									"Do not draw a card if there is already one in this space";

Woods::Woods(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Woods::~Woods()
{
}

void Woods::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	if(this->Cards.size()>0)
	{
			Card temp = Cards.back();
			Cards.pop_back();
			cout<<"You picked up the "<<temp.getName()<<endl<<temp.getDescription()<<endl;
	}
	else if(this->Cards.size()==0)
	{
		Card temp;	
		temp = adventureCards->draw();
		cout<<"You drew a "<<temp.getName()<<endl<<temp.getDescription()<<endl;
	}
}