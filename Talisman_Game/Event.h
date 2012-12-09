#ifndef EVENT_H
#define EVENT_H
#include "adventurecard.h"
#include "Character.h"
class Event :
	public AdventureCard
{
public:
	virtual void effect(Character);
	Event(void);
	~Event(void);
};
#endif

