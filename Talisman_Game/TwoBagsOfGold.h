#pragma once
#include "normalobject.h"
#include "Character.h";
class TwoBagsOfGold :
	public NormalObject
{
public:
	virtual void effect(Character);
	TwoBagsOfGold(void);
	~TwoBagsOfGold(void);
};

