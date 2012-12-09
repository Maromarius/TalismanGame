#ifndef MAGICOBJECT_H
#define MAGICOBJECT_H
#include "adventurecard.h"
class MagicObject :
	public AdventureCard
{
public:
	MagicObject(void);
	~MagicObject(void);
	int objectCraft;
	int objectStrength;
};
#endif
