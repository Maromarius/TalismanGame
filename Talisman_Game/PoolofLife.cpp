#include "PoolofLife.h"


PoolofLife::PoolofLife(void)
{
	NAME = "Pool of Life";
	DESCRIPTION = "Place a total of four lives here when revealed. You may bathe in the Pool once per visit and take one life from the Pool to add to your own lives. When all four have been taken away, the Pool of Life drains away to the discard pile.";
	encounterNumber = 6;
}


PoolofLife::~PoolofLife(void)
{
}
