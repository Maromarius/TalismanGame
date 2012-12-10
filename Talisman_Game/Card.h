#ifndef CARD_H
#define CARD_H
#include <string>
#include <iostream>
using namespace std;
class Card
{
public:
	Card(void);
	~Card(void);
	void print();
	string CARDTYPE;
	string NAME;
	string DESCRIPTION;
	int strength;
	int craft;
	int getStrength();
	string getType();
	string getName();
	string getDescription();
};
#endif

