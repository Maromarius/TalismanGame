#include "Pits.h"
#include "Area.h"

const string Pits::NAME = "Pits";
const string Pits::DESCRIPTION =	"Roll 1 die\n"
									"You are ambushed by that many Pittlords\n"
									"(STRENGTH 4 each) Each turn, fight them one-by-one until \n"
									"you lose a Life. You may escape one Turn after all are dead";

Pits::Pits(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Pits::~Pits()
{
}