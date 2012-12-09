#include "Demon.h"

const string Demon::NAME = "Demon";
const string Demon::TYPE = "Spirit";
const string Demon::DESCRIPTION = "A Demon has appeared from the underworld to cause chaos in this area. It will remain here until it is killed.";

Demon::Demon() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Demon::~Demon(void)
{
}
