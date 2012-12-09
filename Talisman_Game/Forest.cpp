#include "Forest.h"
#include "Area.h"

const string Forest::NAME = "Forest";
const string Forest::DESCRIPTION =	"Roll 1 Die\n"
									"\t1. Attacked by a brigand with Strength 4\n"
									"\t2. Lost; lose your next turn\n"
									"\t3. Lost; lose your next turn\n"
									"\t4. Safe\n"
									"\t5. Safe\n"
									"\t6. A ranger guides you out; gain 1 Craft\n";

Forest::Forest(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Forest::~Forest()
{
}