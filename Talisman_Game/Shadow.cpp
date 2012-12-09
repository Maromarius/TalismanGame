#include "Shadow.h"

const string Shadow::NAME = "Shadow";
const string Shadow::TYPE = "Spirit";
const string Shadow::DESCRIPTION = "A Shadow is lurking in the dark corners of this area. It will remain here until it is killed.";

Shadow::Shadow() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH){}


Shadow::~Shadow(void)
{
}
