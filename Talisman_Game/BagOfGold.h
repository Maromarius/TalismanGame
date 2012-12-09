#pragma once
#include "normalobject.h"
class BagOfGold :
	public NormalObject
{
public:
	virtual void effect(Character);
	BagOfGold(void);
	~BagOfGold(void);
};

