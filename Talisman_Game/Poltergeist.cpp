#include "Poltergeist.h"


Poltergeist::Poltergeist(void)
{
	NAME = "Poltergeist";
	DESCRIPTION ="A Poltergeist has attached itself to you. You must take it as a Follower. Its only effect is to slow your movement to 1 space per turn. You can only rid yourself of it by crossing the River, either by bridge, raft, or ferry. You must then discard it.";
	encounterNumber = 1;
}


Poltergeist::~Poltergeist(void)
{
}
