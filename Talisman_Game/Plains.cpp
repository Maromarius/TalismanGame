#include "Plains.h"
#include "Area.h"

const string Plains::NAME = "Plains";
const string Plains::DESCRIPTION =	"Draw 1 card\n"
									"Do not Draw a card if there is already one in this space";

Plains::Plains(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Plains::~Plains()
{
}

void Plains::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{/*
	Card temp;
		if(this->Cards.size()>0)
		{
				temp = Cards.back();
				Cards.pop_back();
				cout<<"You picked up the "<<temp.getName()<<endl<<temp.getDescription()<<endl;
		}
		else if(this->Cards.size()==0)
		{
			temp;	
			temp = adventureCards->draw();
			cout<<"You drew a "<<temp.getName()<<endl<<temp.getDescription()<<endl;
		}
	*/
}