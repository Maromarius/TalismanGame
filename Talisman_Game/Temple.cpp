#include "Temple.h"
#include "Area.h"

const string Temple::NAME = "Temple";
const string Temple::DESCRIPTION =	"Pray by rolling 2 Dice.\n"
									"2)Lose 3 Lives.\n"
									"3)Lose 1 Life.\n"
									"4)Lose 1 Life or 1 follower.\n"
									"5)Enslaved. You stay here until you roll a 4,5 or 6 on 1 die for your Move.\n"
									"6)Gain 1 Strength.\n"
									"7)Gain 1 Craft.\n"
									"8)Gain 1 Spell.\n"
									"9)Gain 1 Spell.\n"
									"10)Gain a Talisman.\n"
									"11)Gain 1 Life.\n"
									"12)Gain 2 Lives.";

Temple::Temple(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Temple::~Temple()
{
}