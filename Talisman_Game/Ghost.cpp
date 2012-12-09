#include "Ghost.h"

const string Ghost::NAME = "Ghost";
const string Ghost::TYPE = "Spirit";
const string Ghost::DESCRIPTION = "A Ghost materialises in (roll 1 die):\n1. City\n2. Village\n3. Graveyard\n4. Chapel\n5. Castle\n6. Temple\n\nIt now haunts this area and will remain until it is killed.";

//monsterEffect

Ghost::Ghost() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Ghost::~Ghost(void)
{
}
