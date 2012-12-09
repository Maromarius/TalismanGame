#ifndef NORMALOBJECT_H
#define NORMALOBJECT_H
#include "adventurecard.h"
#include "Character.h"
class NormalObject :
	public AdventureCard
{
public:
	virtual void effect(Character);
	NormalObject(void);
	~NormalObject(void);
};
#endif

