#include "Druid.h"

const string Druid::LOCATION = "Forest";
const string Druid::ALIGNMENT = "Neutral";
const string Druid::PROFESSION = "Druid";

Druid::Druid() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Druid::~Druid()
{
}
