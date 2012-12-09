#include "Ruins.h"
#include "Area.h"

const string Ruins::NAME = "Ruins";
const string Ruins::DESCRIPTION =	"Draw 2 cards\n"
									"If there are any Cards already on this space, draw only enough\n"
									"to take the total to 2 Cards";

Ruins::Ruins(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Ruins::~Ruins()
{
}