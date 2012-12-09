#include "Spectre.h"

const string Spectre::NAME = "Spectre";
const string Spectre::TYPE = "Spirit";
const string Spectre::DESCRIPTION = "A Spectre has appeared in this area. It will remain here until it is killed.";

Spectre::Spectre() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Spectre::~Spectre(void)
{
}
