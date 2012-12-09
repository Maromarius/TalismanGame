#include "BlackKnight.h"
#include "Area.h"

const string BlackKnight::NAME = "Black Knight";
const string BlackKnight::DESCRIPTION = "You Must/n"
										"Either give up 1 Gold Coin (discarding it on the stockpile) or lose 1 Life.\n";

BlackKnight::BlackKnight(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

BlackKnight::~BlackKnight()
{
}