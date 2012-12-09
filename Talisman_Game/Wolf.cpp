#include "Wolf.h"

const string Wolf::NAME = "Wolf";
const string Wolf::TYPE = "Animal";
const string Wolf::DESCRIPTION = "A vicious Wolf now dwells in this area. It will remain here until it is killed.";

Wolf::Wolf() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Wolf::~Wolf(void)
{
}
