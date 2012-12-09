#include "Hobgoblin.h"

const string Hobgoblin::NAME = "Hobgoblin";
const string Hobgoblin::TYPE = "Monster";
const string Hobgoblin::DESCRIPTION = "A brutal Hobgoblin is stalking this area. It will remain here until it is killed.";

Hobgoblin::Hobgoblin() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Hobgoblin::~Hobgoblin(void)
{
}
