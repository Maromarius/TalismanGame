#include "Elf.h"

const string Elf::LOCATION = "Forest";
const string Elf::ALIGNMENT = "Good";
const string Elf::PROFESSION = "Elf";

Elf::Elf() : Character(BASE_STRENGTH, BASE_CRAFT, BASE_LIVES, BASE_FATE, NUM_OF_SPELLS, LOCATION, ALIGNMENT, PROFESSION)
{

}

Elf::~Elf()
{
}