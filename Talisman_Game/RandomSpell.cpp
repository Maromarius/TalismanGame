#include "RandomSpell.h"


RandomSpell::RandomSpell(void)
{
	NAME = "Random";
	DESCRIPTION = "Cast on any character at any time. He rolls 1 die to determine the effect on him:\nBecome a Toad for 3 turns\nLose Strength\nLose Craft\nLose all gold\nGain 1 Strength\nGain 1 Life\nAll but Strength and Craft values and those gained from Followers and Objects.";
}


RandomSpell::~RandomSpell(void)
{
}
