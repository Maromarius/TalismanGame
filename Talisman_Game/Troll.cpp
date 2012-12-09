#include "Troll.h"

const string Troll::LOCATION = "Crags";
const string Troll::ALIGNMENT = "Neutral";
const string Troll::PROFESSION = "Troll";

Troll::Troll() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Troll::~Troll()
{
}