#include "Sentinel.h"
#include "Area.h"

const string Sentinel::NAME = "Sentinel";
const string Sentinel::DESCRIPTION =	"Draw 1 Card\n"
									"Do not draw a Card if there is already one here.\n"
									"If you are passing through to cross the bridge to the Middle Region,\n"
									"don't draw a Card. Instead you must defeat the Sentinel (STRENGTH 9) to pass through\n"
									"The Sentinel remains, even if defeated. You do not fight him when passing from the Middle Region.";

Sentinel::Sentinel(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Sentinel::~Sentinel()
{
}