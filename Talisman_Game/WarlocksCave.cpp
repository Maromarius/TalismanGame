#include "WarlocksCave.h"
#include "Area.h"

const string WarlocksCave::NAME = "Warlocks Cave";
const string WarlocksCave::DESCRIPTION =	"You may go on a quest.\n"
									"The Vampire will accept Followers instead of Lives.\n"
									"1) Take 1 Life from another Character.\n"
									"2) Kill 1 Enemy.\n"
									"3) Deliver (discard) 1 Follower.\n"
									"4) Deliver (discard) 1 Magic Object. \n"
									"5) Deliver (discard) 3 Gold Coins. \n"
									"6) Deliver (discard) 2 Gold Coins. \n"
									"Continue with the game. When you complete your task, the Warlock immediatly teleports you back here\n"
									"(move directly without rolling) and gives you a talisman, if available, as your reward.\n";

WarlocksCave::WarlocksCave(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

WarlocksCave::~WarlocksCave()
{
}