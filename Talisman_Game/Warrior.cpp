#include "Warrior.h"

const string Warrior::LOCATION = "Tavern";
const string Warrior::ALIGNMENT = "Neutral";
const string Warrior::PROFESSION = "Warrior";

Warrior::Warrior() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Warrior::~Warrior()
{
}
