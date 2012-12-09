#include "Immobility.h"


Immobility::Immobility(void)
{
	NAME = "Immobility";
	DESCRIPTION = "Cast at the start of a character's turn, before he moves. If cast on a character, he is immobilised (may do nothing apart from negating this Spell with Counterspell) for the duration of that turn. If cast on a creature, it cannot be attacked but may be evaded until the end of the turn.";
}


Immobility::~Immobility(void)
{
}
