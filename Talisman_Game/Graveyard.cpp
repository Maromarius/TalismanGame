#include "Graveyard.h"
#include "Area.h"

const string Graveyard::NAME = "Graveyard";
const string Graveyard::DESCRIPTION =	"Based on Alignment\n"
										"\nGood\n"
										"\tLose one life\n"
										"\nNeutral\n"
										"\tReplenish fate up to your fate value at the cost of one gold each\n"
										"\nEvil\n"
										"\tEither replenish fate up to your fate value for free, or pray by rolling one die:\n"
										"\t1. Ignored\n"
										"\t2. Ignored\n"
										"\t3. Ignored\n"
										"\t4. Ignored\n"
										"\t5. Gain 1 fate\n"
										"\t6. Gain 1 Spell\n";

Graveyard::Graveyard(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Graveyard::~Graveyard()
{
}