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
	string NAME;
	string DESCRIPTION;
};
#endif

