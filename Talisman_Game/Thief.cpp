#include "Thief.h"

const string Thief::LOCATION = "City";
const string Thief::ALIGNMENT = "Neutral";
const string Thief::PROFESSION = "Thief";

Thief::Thief() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Thief::~Thief()
{
}