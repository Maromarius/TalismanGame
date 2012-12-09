#include "Witch.h"


Witch::Witch(void)
{
	NAME = "Witch";
	DESCRIPTION = "A Witch lurks in this space for the rest of the game. If you land here roll 1 die:\n\n1. Become a Toad for 3 turns\n2. Lose 1 life\n3. Gain 1 Strength\n4. Gain 1 Craft\n5. Gain 1 Spell\n6. Replenish fate up to your fate value";
	encounterNumber = 4;
}


Witch::~Witch(void)
{
}
