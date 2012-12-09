#include "Mercenary.h"


Mercenary::Mercenary(void)
{
	NAME = "Mercenary";
	DESCRIPTION = "If you want the Mercenary as your Follower, pay 1 gold. If not, he waits here for a character willing to pay him. While he is your Follower he will add 3 to your Strength in battle until the end of the turn provided you pay 1 gold. You may only pay 1 gold once per turn.";
	encounterNumber = 5;
}


Mercenary::~Mercenary(void)
{
}
