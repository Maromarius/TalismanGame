#include "Serpent.h"

const string Serpent::NAME = "Serpent";
const string Serpent::TYPE = "Animal";
const string Serpent::DESCRIPTION = "A Serpent has made its home in this area. It will remain here until it is killed.";

Serpent::Serpent() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Serpent::~Serpent(void)
{
}
