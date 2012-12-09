#include "Lemure.h"

const string Lemure::NAME = "Lemure";
const string Lemure::TYPE = "Spirit";
const string Lemure::DESCRIPTION = "This lowly creature from the Underworld pounces at you from the shadows. It will remain here until it is killed.";

Lemure::Lemure() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Lemure::~Lemure(void)
{
}
