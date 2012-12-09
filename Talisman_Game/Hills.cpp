#include "Hills.h"
#include "Area.h"

const string Hills::NAME = "Hills";
const string Hills::DESCRIPTION =	"Draw 1 Crads\n"
									"Do not draw a Card if there is already one in this space.\n";

Hills::Hills(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Hills::~Hills()
{
}