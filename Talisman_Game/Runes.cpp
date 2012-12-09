#include "Runes.h"
#include "Area.h"

const string Runes::NAME = "Runes";
const string Runes::DESCRIPTION =	"Draw 1 Card\n"
									"Do not draw a Card if there is already\n"
									"one here. Any Enemies that you fight on the\n"
									"Space, add 2 to their Combat die roll.";

Runes::Runes(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Runes::~Runes()
{
}