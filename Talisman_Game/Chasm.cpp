#include "Chasm.h"
#include "Area.h"

const string Chasm::NAME = "Chasm";
const string Chasm::DESCRIPTION =	"Roll one die for yourself, and one for each of your Followers. \n"
									"If a 1 or 2 is rolled for yourself, lose 1 life. If a 1 or 2 is rolled for a Follower, it is killed.\n";

Chasm::Chasm(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Chasm::~Chasm()
{
}

void Chasm::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	int diceRoll;
	cout<<"Press an key to roll the die for yourselve."<<endl;
	srand((unsigned int)time(0));
	diceRoll = ((int) rand() % 6 + 1);
	cout<<"You rolled a "<<diceRoll<<" ...";
	if(diceRoll==1 || diceRoll==2)
	{
		cout<<"you lose a life!"<<endl;
		character->loseLive(1);
	}
	else
	{
		cout<<"noting happened."<<endl;
	}
	
	/*for(int i=0;i<character.getNumberOfFollowers();i++)
	{
		cout<<"Press an key to roll the die for your follower."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";
		if(diceRoll==1 || diceRoll==2)
		{
			cout<<character.getFollower(i)<<" died!"<<endl;
			character.loseFollower(i);
		}
		else
		{
			cout<<"noting happened."<<endl;
		}
	
	}*/

	character->printStats();
	return;
}