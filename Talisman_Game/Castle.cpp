#include "Castle.h"
#include "Area.h"

const string Castle::NAME = "Castle";
const string Castle::DESCRIPTION = "Royal Doctor/n"
									"Heal up to your life value at the cost of one gold each. If you have the Prince or Princess, heal up to two lives for free./n";

Castle::Castle(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Castle::~Castle()
{
}