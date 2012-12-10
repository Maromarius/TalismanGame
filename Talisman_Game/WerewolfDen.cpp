#include "WerewolfDen.h"
#include "Area.h"

const string WerewolfDen::NAME = "Werewolf Den";
const string WerewolfDen::DESCRIPTION =	"Roll 2 dice for the Werewolf Strength, then fight it.\n"
									"If you lose, lose 1 life and you must fight a Werewolf again on your next turn.\n"
									"You may not move on until you have killed a Werewolf.";

WerewolfDen::WerewolfDen(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

WerewolfDen::~WerewolfDen()
{
}

void WerewolfDen::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
			/*cout<<"You are attacked by a WereWolf!"<<endl;
	
			int diceRoll1,diceRoll2;

			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll1 = ((int) rand() % 6 + 1);

			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll2 = ((int) rand() % 6 + 1);

			Enemy *WereWolf = new Enemy("WereWolf", "a WereWolf from the Den.","WereWolf",5,0,(diceRoll1+diceRoll2));		
			bool killedWereWolf = character->battleMonster(*WereWolf);

			if(!killedWereWolf)
				character->setIdleTurns(1);*/
}