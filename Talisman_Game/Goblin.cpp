#include "Goblin.h"

const string Goblin::NAME = "Goblin";
const string Goblin::TYPE = "Monster";
const string Goblin::DESCRIPTION = "A Goblin is laying waste to this area. It will remain here until it is killed.";

Goblin::Goblin() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Goblin::~Goblin(void)
{
}
