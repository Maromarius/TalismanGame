#include "Bandit.h"

const string Bandit::NAME = "Bandit";
const string Bandit::TYPE = "Monster";
const string Bandit::DESCRIPTION = "A Bandit is marauding in this area. He will not attack if you pay 1 gold. He will remain here until he is killed.";

//monsterEffect

Bandit::Bandit() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Bandit::~Bandit(void)
{
}
