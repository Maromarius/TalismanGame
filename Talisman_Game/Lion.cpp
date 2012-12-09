#include "Lion.h"

const string Lion::NAME = "Lion";
const string Lion::TYPE = "Animal";
const string Lion::DESCRIPTION = "A Lion is preying on everything in this area. It will remain here until it is killed.";

Lion::Lion() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Lion::~Lion(void)
{
}
