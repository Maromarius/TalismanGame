#include "VampiresTower.h"
#include "Area.h"

const string VampiresTower::NAME = "Vampires Tower";
const string VampiresTower::DESCRIPTION =	"You must roll 1 die to determine how many Lives the Vampire takes from you.\n"
									"The Vampire will accept Followers instead of Lives.\n"
									"1-2) Lose 1 Life. \n"
									"3-4) Lose 2 Lives. \n"
									"5-6) Lose 3 Lives. \n";

VampiresTower::VampiresTower(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

VampiresTower::~VampiresTower()
{
}