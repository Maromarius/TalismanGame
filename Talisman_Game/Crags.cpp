#include "Crags.h"
#include "Area.h"

const string Crags::NAME = "Crags";
const string Crags::DESCRIPTION =	"Roll 1 Die\n"
									"\t 1. Attacked by a Spirit with Craft 4\n"
									"\t 2. Lost; lose your next turn\n"
									"\t 3. Lost; lose your next turn\n"
									"\t 4. Safe; no effect\n"
									"\t 5. Safe; no effect\n"
									"\t 6. A barbarian leads you out; gain 1 Strength\n";

Crags::Crags(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Crags::~Crags()
{
}