#include "Shrine.h"


Shrine::Shrine(void)
{
	NAME = "Shrine";
	DESCRIPTION = "The Shrine will remain here for the rest of the game. Roll 1 die to pray with the following results: 1) Ignored 2) Gain 1 fate 3) Gain 1 gold 4) Gain 1 Spell 5) Gain 1 life 6) Teleport to any space in the same Region";
	encounterNumber = 6;
}


Shrine::~Shrine(void)
{
}
