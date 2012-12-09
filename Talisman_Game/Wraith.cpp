#include "Wraith.h"

const string Wraith::NAME = "Wraith";
const string Wraith::TYPE = "Spirit";
const string Wraith::DESCRIPTION = "A Wraith is wreaking havoc in this area. It will remain until it is killed.";

Wraith::Wraith() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Wraith::~Wraith(void)
{
}
