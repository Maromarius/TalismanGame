#include "Dragon.h"

const string Dragon::NAME = "Dragon";
const string Dragon::TYPE = "Dragon";
const string Dragon::DESCRIPTION = "A fearsome Dragon is terrorising this area. It will remain here until it is killed.";


Dragon::Dragon() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Dragon::~Dragon(void)
{
}
