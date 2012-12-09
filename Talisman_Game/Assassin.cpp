#include "Assassin.h"

const string Assassin::LOCATION = "City";
const string Assassin::ALIGNMENT = "Evil";
const string Assassin::PROFESSION = "Assassin";

Assassin::Assassin() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Assassin::~Assassin()
{
}
