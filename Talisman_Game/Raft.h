#pragma once
#include "normalobject.h"
#include "Character.h"
class Raft :
	public NormalObject
{
public:
	virtual void effect(Character);
	Raft(void);
	~Raft(void);
};

