#include "Prophetess.h"

const string Prophetess::LOCATION = "Chapel";
const string Prophetess::ALIGNMENT = "Good";
const string Prophetess::PROFESSION = "Prophetess";

Prophetess::Prophetess() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Prophetess::~Prophetess()
{
}