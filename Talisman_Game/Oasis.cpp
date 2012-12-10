#include "Oasis.h"
#include "Area.h"

const string Oasis::NAME = "Oasis";
const string Oasis::DESCRIPTION =	"Draw 2 Cards\n"
									"If there are any cards in this space, draw only enough\n"
									"to take the total to 2";

Oasis::Oasis(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Oasis::~Oasis()
{
}

void Oasis::effect(Character* character, Deck* adventureCards, Deck* spellCards)
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