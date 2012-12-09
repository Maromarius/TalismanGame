#include "Sorcerer.h"


Sorcerer::Sorcerer(void)
{
	NAME = "Sorcerer";
	DESCRIPTION = "A Sorcerer has set up shop here and will remain for the rest of the game. He sells Spells at the price of 1 gold per Spell - but only to those whose Craft allows. You may only buy one Spell per visit.";
	encounterNumber = 4;
}


Sorcerer::~Sorcerer(void)
{
}
