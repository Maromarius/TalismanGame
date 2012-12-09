#include "HiddenValley.h"
#include "Area.h"

const string HiddenValley::NAME = "Hidden Valley";
const string HiddenValley::DESCRIPTION ="Draw 3 Crads\n"
										"If there are already any Cards in this space,\n"
										"draw only enough to take the total to 3 Cards.\n";

HiddenValley::HiddenValley(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

HiddenValley::~HiddenValley()
{
}