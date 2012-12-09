#ifndef ADVENTURECARD_H
#define ADVENTURECARD_H
#include "card.h"
class AdventureCard :
	public Card
{
public:
	AdventureCard(void);
	~AdventureCard(void);
	int encounterNumber;
};
#endif
