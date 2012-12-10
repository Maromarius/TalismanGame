#include "Fields.h"
#include "Area.h"

const string Fields::NAME = "Fields";
const string Fields::DESCRIPTION =	"Draw 1 Card\n"
									"Do not draw a card if there is already one in this space.\n";

Fields::Fields(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Fields::~Fields()
{
}

void Fields::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{/*
	if(this->Fields.size()>0)
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
	}*/
}