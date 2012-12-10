#include "Runes.h"
#include "Area.h"

const string Runes::NAME = "Runes";
const string Runes::DESCRIPTION =	"Draw 1 Card\n"
									"Do not draw a Card if there is already\n"
									"one here. Any Enemies that you fight on the\n"
									"Space, add 2 to their Combat die roll.";

Runes::Runes(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Runes::~Runes()
{
}

void Runes::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{/*
	Card temp;
	for (int i =0;i<2;i++)
	{
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
	}*/
}