#include "Wizard.h"

const string Wizard::LOCATION = "Graveyard";
const string Wizard::ALIGNMENT = "Evil";
const string Wizard::PROFESSION = "Wizard";

Wizard::Wizard() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Wizard::~Wizard()
{
}