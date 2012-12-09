#include "Monk.h"

const string Monk::LOCATION = "Village";
const string Monk::ALIGNMENT = "Good";
const string Monk::PROFESSION = "Monk";

Monk::Monk() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Monk::~Monk()
{
}
