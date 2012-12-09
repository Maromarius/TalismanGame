#include "Card.h"


Card::Card(void)
{
	NAME = "";
	DESCRIPTION = "";
}

Card::~Card(void)
{
}

void Card::print(){
	cout << NAME << "\n" << DESCRIPTION;
}