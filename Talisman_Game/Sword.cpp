#include "Sword.h"
#include <string>
#include <iostream>

using namespace std;


Sword::Sword(void)
{
	NAME="Sword";
	DESCRIPTION="Add 1 to your Strength during battle.";
	objectStrength = 1;
	encounterNumber=5;
}


Sword::~Sword(void)
{
}
