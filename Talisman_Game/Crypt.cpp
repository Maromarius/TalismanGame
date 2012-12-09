#include "Crypt.h"
#include "Area.h"

const string Crypt::NAME = "Crypt";
const string Crypt::DESCRIPTION =	"Roll 3 Dice\n"
									"Substract your Strength from the total for your exit:\n"
									"\t0. Crypt\n"
									"\t1. Plain of Peril\n"
									"\t2-3. Portal of Power\n"
									"\t4-5. Warlock's Cave\n"
									"\t6+. City\n";

Crypt::Crypt(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Crypt::~Crypt()
{
}