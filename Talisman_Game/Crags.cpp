#include "Crags.h"
#include "Area.h"

const string Crags::NAME = "Crags";
const string Crags::DESCRIPTION =	"Roll 1 Die\n"
									"\t 1. Attacked by a Spirit with Craft 4\n"
									"\t 2. Lost; lose your next turn\n"
									"\t 3. Lost; lose your next turn\n"
									"\t 4. Safe; no effect\n"
									"\t 5. Safe; no effect\n"
									"\t 6. A barbarian leads you out; gain 1 Strength\n";

Crags::Crags(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Crags::~Crags()
{
}

void Crags::effect(Character character)
{
	int diceRoll;
			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
			cout<<"You rolled a "<<diceRoll<<" ...";

			switch(diceRoll)
			{
			case(1):cout<<"you are attacked by a Spirit!"<<endl;
						//character.battleMonster(Spirit)
						break;
			case(2):cout<<"you loose one turn!"<<endl;
					break;
			case(3):cout<<"you loose one turn!"<<endl;
					break;
			case(4):cout<<"nothing happend."<<endl;
					break;
			case(5):cout<<"nothing happend."<<endl;
					break;
			case(6):cout<<"a Barabarian came to your aid, you gained one strength!"<<endl;
					character.gainStrength(1);
					break;
			}
	character.printStats();
	return;
}