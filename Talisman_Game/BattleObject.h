#ifndef BATTLEOBJECT_H
#define BATTLEOBJECT_H
#include "AdventureCard.h"
class BattleObject :
	public AdventureCard
{
public:
	BattleObject(void);
	~BattleObject(void);
	int objectStrength;
};
#endif

