#include "Ape.h"

const string Ape::NAME = "Ape";
const string Ape::TYPE = "Animal";
const string Ape::DESCRIPTION = "A savage Ape is terrorising this area. It will remain here until it is killed.";

Ape::Ape() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH)
{

}

Ape::~Ape()
{
}
