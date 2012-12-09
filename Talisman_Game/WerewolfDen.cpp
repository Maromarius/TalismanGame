#include "WerewolfDen.h"
#include "Area.h"

const string WerewolfDen::NAME = "Werewolf Den";
const string WerewolfDen::DESCRIPTION =	"Roll 2 dice for the Werewolf Strength, then fight it.\n"
									"If you lose, lose 1 life and you must fight the same Werewolf again on your next turn.\n"
									"You may not move on until you have killed the Werewolf.";

WerewolfDen::WerewolfDen(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

WerewolfDen::~WerewolfDen()
{
}

void WerewolfDen::effect(Character character, Deck* adventureCards, Deck* spellCards)
{
			int diceRoll1,diceRoll2;
			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll1 = ((int) rand() % 6 + 1);
			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll2 = ((int) rand() % 6 + 1);
}