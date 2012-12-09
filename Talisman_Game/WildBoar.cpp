#include "WildBoar.h"

const string WildBoar::NAME = "WildBoar";
const string WildBoar::TYPE = "Animal";
const string WildBoar::DESCRIPTION = "There is a Wild Boar roaming this area. It will remain here until it is killed.";

WildBoar::WildBoar() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


WildBoar::~WildBoar(void)
{
}
