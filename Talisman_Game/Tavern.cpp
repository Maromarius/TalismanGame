#include "Tavern.h"
#include "Area.h"

const string Tavern::NAME = "Tavern";
const string Tavern::DESCRIPTION =	"You must roll the die for the following result.\n"
									"1)You got blind drunk and collapsed in a corner. Miss 1 Turn.\n"
									"2)You got tipsy and got in a fight with a farmer (STRENGTH 3).\n"
									"3)You gamble and lose 1 gold.\n"
									"4)You gamble and win 1 gold.\n"
									"5)A drunkard offers to Teleport you to any Outer Region space of your choice on your next Move.\n"
									"6)A boatman offers to Ferry you to the Temple on your next Move.";

Tavern::Tavern(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Tavern::~Tavern()
{
}