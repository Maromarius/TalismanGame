#include "Giant.h"

const string Giant::NAME = "Giant";
const string Giant::TYPE = "Monster";
const string Giant::DESCRIPTION = "An immense Giant has set up residence in this area. He will remain here until he is killed.";

Giant::Giant() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Giant::~Giant(void)
{
}
