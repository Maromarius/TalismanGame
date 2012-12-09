#include "PortalOfPower.h"
#include "Area.h"

const string PortalOfPower::NAME = "Portal of Power";
const string PortalOfPower::DESCRIPTION =	"Draw 1 card\n"
									"Do not Draw a card if there is already one in this space.\n"
									"If you are trying to pass to the Plain of Peril, you do not draw a card\n"
									"but you must either use Craft to pick the lock or Strength to force it.\n"
									"Decide which ability you are using.\n"
									"Having decided roll 2 dice.\n"
									"If the total is equal to or less than the chosen ability, Go to the Plain of Peril.\n"
									"If it is higher, remain here and lose 1 from that ability";

PortalOfPower::PortalOfPower(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

PortalOfPower::~PortalOfPower()
{
}