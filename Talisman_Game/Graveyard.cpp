#include "Graveyard.h"
#include "Area.h"

const string Graveyard::NAME = "Graveyard";
const string Graveyard::DESCRIPTION =	"Based on Alignment\n"
										"\nGood\n"
										"\tLose one life\n"
										"\nNeutral\n"
										"\tReplenish fate up to your fate value at the cost of one gold each\n"
										"\nEvil\n"
										"\tEither replenish fate up to your fate value for free, or pray by rolling one die:\n"
										"\t1. Ignored\n"
										"\t2. Ignored\n"
										"\t3. Ignored\n"
										"\t4. Ignored\n"
										"\t5. Gain 1 fate\n"
										"\t6. Gain 1 Spell\n";

Graveyard::Graveyard(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Graveyard::~Graveyard()
{
}

void Graveyard::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	if(character->getAlignment()=="Good")
	{
		cout<<"You are Evil, so you will lose a life."<<endl;
		character->loseLive(1);
	}
	else if(character->getAlignment()=="Neutral")
	{
			char decision;
			cout<<"Would you like to gain Fate at the cost of 1 gold?(y/n)"<<endl;
			cin>>decision;

			if(decision=='y')
			{	
				character->replenishFate(1);
				character->printStats();
				return;
			}
			else if(decision=='n')
				return;
	}
	else if(character->getAlignment()=="Evil")
	{
		char decision;
		cout<<"Would you like to replenish your Fate for free or Pray?(h/p)"<<endl;
		cin>>decision;

		if(decision=='h')
		{	
			character->replenishFate(1);
		}
		else if(decision=='p')
		{
			int diceRoll;
			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
			cout<<"You rolled a "<<diceRoll<<" ...";

			switch(diceRoll)
			{
			case(1):
			case(2):
			case(3):
			case(4):cout<<"nothing happened."<<endl;
					break;
			case(5):cout<<"you gained a life!"<<endl;
					character->gainFate(1);
					break;
			case(6):cout<<"you gained a spell!"<<endl;
					Card temp = spellCards->draw();
					if(character->hasRoomForSpells())
						character->addSpell(temp);
					else
						this->Cards.push_back(temp);
					break;
			}
		}
	}
	
	character->printStats();
	return;
}