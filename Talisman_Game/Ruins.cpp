#include "Ruins.h"
#include "Area.h"

const string Ruins::NAME = "Ruins";
const string Ruins::DESCRIPTION =	"Draw 2 cards\n"
									"If there are any Cards already on this space, draw only enough\n"
									"to take the total to 2 Cards";

Ruins::Ruins(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Ruins::~Ruins()
{
}

void Ruins::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
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
	}
}
