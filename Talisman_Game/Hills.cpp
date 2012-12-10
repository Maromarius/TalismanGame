#include "Hills.h"
#include "Area.h"

const string Hills::NAME = "Hills";
const string Hills::DESCRIPTION =	"Draw 1 Card\n"
									"Do not draw a Card if there is already one in this space.\n";

Hills::Hills(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Hills::~Hills()
{
}

void Hills::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
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
}