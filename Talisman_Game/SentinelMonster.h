#pragma once
#include "enemy.h"
class SentinelMonster :
	public Enemy
{

protected:	
    static const int STRENGTH = 9;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 0;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
	SentinelMonster(void);
	~SentinelMonster(void);
};

