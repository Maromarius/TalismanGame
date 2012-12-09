#include "Sorceress.h"

const string Sorceress::LOCATION = "Graveyard";
const string Sorceress::ALIGNMENT = "Evil";
const string Sorceress::PROFESSION = "Sorceress";

Sorceress::Sorceress() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Sorceress::~Sorceress()
{
}