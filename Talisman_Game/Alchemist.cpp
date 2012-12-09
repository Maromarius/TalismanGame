#include "Alchemist.h"


Alchemist::Alchemist(void)
{
	NAME = "Alchemist";
	DESCRIPTION = "Cast at the start of your turn, before you move. Take one Object of your choice or one gold from any character.\nThe Alchemist can convert any number of Objects you have into gold. Discard the chosen Objects and gain 1 gold for each. He cannot reverse the procedure.";
	encounterNumber = 5;
}


Alchemist::~Alchemist(void)
{
}
