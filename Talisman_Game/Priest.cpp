#include "Priest.h"

const string Priest::LOCATION = "Chapel";
const string Priest::ALIGNMENT = "Good";
const string Priest::PROFESSION = "Priest";

Priest::Priest() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Priest::~Priest()
{
}