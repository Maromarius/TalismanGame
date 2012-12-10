#include "PlainOfPeril.h"
#include "Area.h"

const string PlainOfPeril::NAME = "Plain of Peril";
const string PlainOfPeril::DESCRIPTION ="You must stop here before going on\n"
										"in the inner region where you\n"
										"only Move 1 Space per turn";

PlainOfPeril::PlainOfPeril(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

PlainOfPeril::~PlainOfPeril()
{
}

void PlainOfPeril::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	/*cout<<"Welcome to the Plain of peril, take a break here, nothing will happen to you!"<<endl;*/
}