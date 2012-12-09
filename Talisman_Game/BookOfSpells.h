#pragma once
#include "event.h"
class BookOfSpells :
	public Event
{
public:
	virtual void effect(Character);
	BookOfSpells(void);
	~BookOfSpells(void);
};

