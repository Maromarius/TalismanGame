#include "Desert.h"
#include "Area.h"

const string Desert::NAME = "Desert";
const string Desert::DESCRIPTION =	"Lose 1 Life\n"
									"Do not draw a card if there is already one in this space.\n";

Desert::Desert(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Desert::~Desert()
{
}

void Desert::effect(Character character, Deck* adventureCards, Deck* spellCards)
{
	if(character.hasWaterBottle())
		{
			char decision;
			cout<<"You will lose a life if you do not use your Water Bottle. Would you like to use it?(y/n)"<<endl;
			cin>>decision;
			if(decision=='y')
			{
				character.removeObject("WaterBottle");
				character.setHasWaterBottle(false);
			}
			else if (decision=='n')
			{
				character.loseLive(1);
			}
		}
	else
		character.loseLive(1);
}