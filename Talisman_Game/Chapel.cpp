#include "Chapel.h"
#include "Area.h"

const string Chapel::NAME = "Chapel";
const string Chapel::DESCRIPTION = "Based on Alignment\n\n"
									"Evil\n"
									"\tLose one life\n"
									"Neutral\n"
									"\tHeal up to your life value at the cost of one gold each\n"
									"Good\n"
									"\tEither heal up to your life value for free, or pray by rolling one die:\n"
									"\t1. Ignored\n"
									"\t1. Ignored\n"
									"\t1. Ignored\n"
									"\t1. Ignored\n"
									"\t1. Gain 1 life\n"
									"\t1. Gain 1 Spell\n";

Chapel::Chapel(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Chapel::~Chapel()
{
}