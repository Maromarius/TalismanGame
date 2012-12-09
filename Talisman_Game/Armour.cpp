#include "Armour.h"


Armour::Armour(void)
{
	NAME = "Armour";
	DESCRIPTION = "If you are defeated in battle and just lost a life, roll 1 die. If you roll a 4, 5, or 6, the Armour protected you and you did not lose that life, though you still lost the battle.";
	encounterNumber = 5;
}


Armour::~Armour(void)
{
}
