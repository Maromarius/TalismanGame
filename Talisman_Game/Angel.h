#pragma once
#include "event.h"
class Angel :
	public Event
{
public:
	virtual void effect(Character);
	Angel(void);
	~Angel(void);
};

