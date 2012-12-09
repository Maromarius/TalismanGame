#include "Mines.h"
#include "Area.h"

const string Mines::NAME = "Mines";
const string Mines::DESCRIPTION =	"Roll 3 Dice\n"
									"Substract your current Craft from the total for your come out:\n"
									"\t0. Mines\n"
									"\t1. Plain of Peril\n"
									"\t2-3. Portal of Power\n"
									"\t4-5. Warlock's Cave\n"
									"\t6+. Tavern\n";

Mines::Mines(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Mines::~Mines()
{
}