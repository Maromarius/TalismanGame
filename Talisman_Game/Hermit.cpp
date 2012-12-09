#include "Hermit.h"


Hermit::Hermit(void)
{
	NAME = "Hermit";
	DESCRIPTION = "Roll 1 die and place the Hermit on the indicated space:\n\n1. Crypt\n2. Plain of Peril\n3. Cursed Glade\n4. Oasis\n5. Crags\n6. Forest\n\nHe will give the first character to visit him there a Talisman, if available, and then vanish to the discard pile.";
	encounterNumber = 4;
}


Hermit::~Hermit(void)
{
}
