#include "Chasm.h"
#include "Area.h"

const string Chasm::NAME = "Chasm";
const string Chasm::DESCRIPTION =	"Roll one die for yourself, and one for each of your Followers. \n"
									"If a 1 or 2 is rolled for yourself, lose 1 life. If a 1 or 2 is rolled for a Follower, it is killed.\n";

Chasm::Chasm(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Chasm::~Chasm()
{
}