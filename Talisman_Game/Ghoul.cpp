#include "Ghoul.h"

const string Ghoul::LOCATION = "Graveyard";
const string Ghoul::ALIGNMENT = "Evil";
const string Ghoul::PROFESSION = "Ghoul";

Ghoul::Ghoul() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Ghoul::~Ghoul()
{
}
