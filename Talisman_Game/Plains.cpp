#include "Plains.h"
#include "Area.h"

const string Plains::NAME = "Plains";
const string Plains::DESCRIPTION =	"Draw 1 card\n"
									"Do not Draw a card if there is already one in this space";

Plains::Plains(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Plains::~Plains()
{
}