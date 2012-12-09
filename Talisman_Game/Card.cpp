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
	cout << NAME << "\n" << DESCRIPTION<<"\n";
}

string Card::getType(){
	return this->CARDTYPE;
}

string Card::getName(){
	return this->NAME;
}

string Card::getDescription(){
	return this->DESCRIPTION;
}