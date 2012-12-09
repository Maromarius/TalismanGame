#include "Angel.h"


Angel::Angel(void)
{
	NAME = "Angel";
	DESCRIPTION = "If you are of good alignment, you gain one life. If you are evil, you lose one life. There is no effect if you are neutral. The Angel then departs to the discard pile.";
	encounterNumber = 1;
}


Angel::~Angel(void)
{
}
void Angel::effect(Character c){
	if(c.getAlignment()=="Good")
		c.gainLive(1);
	if(c.getAlignment()=="Evil")
		c.loseLive(1);
}
