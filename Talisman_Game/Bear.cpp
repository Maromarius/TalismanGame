#include "Bear.h"

const string Bear::NAME = "Bear";
const string Bear::TYPE = "Animal";
const string Bear::DESCRIPTION = "A ferocious Bear is running amok in this area. It will remain here until it is killed.";

Bear::Bear() : Enemy(NAME, DESCRIPTION, TYPE, ENCOUNTER_NUMBER, CRAFT, STRENGTH)
{

}

Bear::~Bear()
{
}
