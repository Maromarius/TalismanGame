#include "CursedGlade.h"
#include "Area.h"

const string CursedGlade::NAME = "Cursed Glade";
const string CursedGlade::DESCRIPTION = "Draw 1 Card\n"
										"Do not draw a card if there is already one in this space.\n"
										"Strength and Craft derived from Objects and Magic Objects do not count on this space, nor may you use Magic Objects or cast Spells.\n";

CursedGlade::CursedGlade(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

CursedGlade::~CursedGlade()
{
}

void CursedGlade::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	//if(this->Cards.size()>0)
	//	{}//this->Cards[0]->effect(character)
	//else if(this->Cards.size()==0)
	//	{}//do something
}