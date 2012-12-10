#include "Chapel.h"
#include "Area.h"

const string Chapel::NAME = "Chapel";
const string Chapel::DESCRIPTION = "Based on Alignment\n\n"
									"Evil\n"
									"\tLose one life\n"
									"Neutral\n"
									"\tHeal up to your life value at the cost of one gold each\n"
									"Good\n"
									"\tEither heal up to your life value for free, or pray by rolling one die:\n"
									"\t1. Ignored\n"
									"\t2. Ignored\n"
									"\t3. Ignored\n"
									"\t4. Ignored\n"
									"\t5. Gain 1 life\n"
									"\t6. Gain 1 Spell\n";

Chapel::Chapel(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Chapel::~Chapel()
{
}

void Chapel::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	if(character->getAlignment()=="Evil")
	{
		cout<<"You are Evil, so you will lose a life."<<endl;
		character->loseLive(1);
	}
	else if(character->getAlignment()=="Neutral")
	{
		while(true)
		{
			char decision;
			cout<<"Would you like to heal yourself at the cost of 1 gold?(y/n)"<<endl;
			cin>>decision;

			if(decision=='y')
			{	
				character->replenishLives(0);
				character->printStats();
				return;
			}
			else if(decision=='n')
				return;
		}			
	}
	else if(character->getAlignment()=="Good")
	{
		char decision;
		cout<<"Would you like to heal yourself for free or Pray?(h/p)"<<endl;
		cin>>decision;

		if(decision=='h')
		{	
			character->replenishLives(0);
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
					character->gainLive(1);
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