#pragma once
#include "adventurecard.h"
class Follower :
	public AdventureCard
{
public:
	Follower(void);
	~Follower(void);
	int followerStrength;
	int followerCraft;
};

