#include "WerewolfDen.h"
#include "Area.h"

const string WerewolfDen::NAME = "Werewolf Den";
const string WerewolfDen::DESCRIPTION =	"Roll 2 dice for the Werewolf Strength, then fight it.\n"
									"If you lose, lose 1 life and you must fight the same Werewolf again on your next turn.\n"
									"You may not move on until you have killed the Werewolf.";

WerewolfDen::WerewolfDen(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

WerewolfDen::~WerewolfDen()
{
}