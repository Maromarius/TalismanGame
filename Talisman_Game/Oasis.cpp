#include "Oasis.h"
#include "Area.h"

const string Oasis::NAME = "Oasis";
const string Oasis::DESCRIPTION =	"Draw 2 Cards\n"
									"If there are any cards in this space, draw only enough\n"
									"to take the total to 2";

Oasis::Oasis(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Oasis::~Oasis()
{
}