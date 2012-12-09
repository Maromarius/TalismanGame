#ifndef FOLLOWER_H
#define FOLLOWER_H
#include "adventurecard.h"
class Follower :
	public AdventureCard
{
public:
	Follower(void);
	~Follower(void);
	int followerStrength;
	int followerCraft;
	int getStrength();
};
#endif
