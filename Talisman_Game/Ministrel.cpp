#include "Ministrel.h"

const string Ministrel::LOCATION = "Tavern";
const string Ministrel::ALIGNMENT = "Good";
const string Ministrel::PROFESSION = "Ministrel";

Ministrel::Ministrel() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Ministrel::~Ministrel()
{
}
