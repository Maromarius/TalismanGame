#include "City.h"
#include "Area.h"

const string City::NAME = "City";
const string City::DESCRIPTION = "Visit only one of the following:\n"
									"Enchantress: Roll 1 die:\n"
									"\t1. You are turned into a Toad for 3 Turns\n"
									"\t2. Lose 1 Strength\n"
									"\t3. Lose 1 Craft\n"
									"\t4. Gain 1 Craft\n"
									"\t5. Gain 1 Strength\n"
									"\t6. Gain 1 Spell\n"
									"Doctor: He will Heal up to 2 Lives at the cost of 1 Gold Coin each.\n"
									"Alchemist: He will turn any of your Objects into Gold Coin. Discard the Objects you choose and take 1 Gold Coin for each.\n";

City::City(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

City::~City()
{
}