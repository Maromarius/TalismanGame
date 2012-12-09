#pragma once
#include "normalobject.h"
#include "Character.h"
class WaterBottle :
	public NormalObject
{
public:
	virtual void effect(Character);
	WaterBottle(void);
	~WaterBottle(void);
};

