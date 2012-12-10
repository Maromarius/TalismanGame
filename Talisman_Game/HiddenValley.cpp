#include "HiddenValley.h"
#include "Area.h"

const string HiddenValley::NAME = "Hidden Valley";
const string HiddenValley::DESCRIPTION ="Draw 3 Crads\n"
										"If there are already any Cards in this space,\n"
										"draw only enough to take the total to 3 Cards.\n";

HiddenValley::HiddenValley(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

HiddenValley::~HiddenValley()
{
}

void HiddenValley::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	Card temp;
	for (int i =0;i<3;i++)
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