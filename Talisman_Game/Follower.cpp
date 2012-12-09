#include "Follower.h"


Follower::Follower(void)
{
	followerStrength = 0;
	followerCraft = 0;
	CARDTYPE="Follower";
}

int Follower::getStrength(){
	return followerStrength;
}

Follower::~Follower(void)
{
}
