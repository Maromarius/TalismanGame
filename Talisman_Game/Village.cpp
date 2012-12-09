#include "Village.h"
#include "Area.h"

const string Village::NAME = "Village";
const string Village::DESCRIPTION =	"Visit only one of the following.\n"
									"Healer) The healer will restore Lives at the price of 1 Gold Coin each, back up to your starting total.\n"
									"Blacksmith) The Blacksmith sells the following objects (if available)\n"
									"Helmet - 2G, Sword - 2G, Axe - 2G, Shield - 2G, Armor - 4G.\n"
									"Mystic) Roll 1 Die.\n"
									"1-3) Ignored.\n"
									"4) If you are Evil or Neutral, you become Good.\n"
									"5) Gain 1 Craft.\n"
									"6) Gain 1 Spell.";

Village::Village(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Village::~Village()
{
}