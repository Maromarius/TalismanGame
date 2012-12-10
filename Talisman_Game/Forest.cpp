#include "Forest.h"
#include "Area.h"

const string Forest::NAME = "Forest";
const string Forest::DESCRIPTION =	"Roll 1 Die\n"
									"\t1. Attacked by a brigand with Strength 4\n"
									"\t2. Lost; lose your next turn\n"
									"\t3. Lost; lose your next turn\n"
									"\t4. Safe\n"
									"\t5. Safe\n"
									"\t6. A ranger guides you out; gain 1 Craft\n";

Forest::Forest(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Forest::~Forest()
{
}

void Forest::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	int diceRoll;
			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
			cout<<"You rolled a "<<diceRoll<<" ...";

			switch(diceRoll)
			{
			case(1):{cout<<"you are attacked by a brigand!"<<endl;
					Enemy *brigand = new Enemy("Brigand", "a brigand from the Forest.","brigand",5,0,4);		
					character->battleMonster(*brigand);
					break;}
			case(2):cout<<"you loose one turn!"<<endl;
					break;
			case(3):cout<<"you loose one turn!"<<endl;
					break;
			case(4):cout<<"nothing happend."<<endl;
					break;
			case(5):cout<<"nothing happend."<<endl;
					break;
			case(6):cout<<"a Ranger came to your aid, you gained one craft!"<<endl;
					character->gainCraft(1);
					break;
			}
	character->printStats();
	return;
}