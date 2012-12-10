#include "Pits.h"
#include "Area.h"
#include "Enemy.h"

const string Pits::NAME = "Pits";
const string Pits::DESCRIPTION =	"Roll 1 die\n"
									"You are ambushed by that many Pittlords\n"
									"(STRENGTH 4 each) Each turn, fight them one-by-one until \n"
									"you lose a Life. You may escape one Turn after all are dead";

Pits::Pits(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Pits::~Pits()
{
}

void Pits::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	int diceRoll;

	cout<<"Press an key to roll the die."<<endl;
	srand((unsigned int)time(0));
	diceRoll = ((int) rand() % 6 + 1);
			
	cout<<diceRoll<<" Pittlords Attack you!!"<<endl;

	for(int i =0;i<diceRoll;i++)
	{
		Enemy *PitLord = new Enemy("PitLord", "a self-intitle Lord of this Pit.","Pitlord",5,0,4);		
		character->battleMonster(*PitLord);
	}
}