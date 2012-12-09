#include "Shield.h"
#include <string>
#include <iostream>

using namespace std;


Shield::Shield(void)
{

	NAME = "Shield";
	DESCRIPTION = "If you are defeated in battle and just lost a life, roll 1 die. If you roll a 5 or 6, the Shield protected you and you did not lose that life, though you still lost the battle.";
	encounterNumber = 5;
}


Shield::~Shield(void)
{
}
