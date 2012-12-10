#include "VampiresTower.h"
#include "Area.h"

const string VampiresTower::NAME = "Vampires Tower";
const string VampiresTower::DESCRIPTION =	"You must roll 1 die to determine how many Lives the Vampire takes from you.\n"
											"The Vampire will accept Followers instead of Lives.\n"
											"1-2) Lose 1 Life. \n"
											"3-4) Lose 2 Lives. \n"
											"5-6) Lose 3 Lives. \n";

VampiresTower::VampiresTower(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

VampiresTower::~VampiresTower()
{
}

void VampiresTower::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{/*
	int diceRoll;
	int LifeGettingLost;
	char decision;

	cout<<"Press an key to roll the first die."<<endl;
	srand((unsigned int)time(0));
	diceRoll = ((int) rand() % 6 + 1);
	cout<<"You rolled a "<<diceRoll<<endl;
	if(diceRoll==1||diceRoll==2)
		LifeGettingLost=1;
	else if(diceRoll==3||diceRoll==5)
		LifeGettingLost=2;
	else if(diceRoll==5||diceRoll==6)
		LifeGettingLost=3;
	cout<<"You will loose "<<LifeGettingLost<<"life(lives)/follower(s)!"<<endl;

	for(int i=0;i<LifeGettingLost;i++)
	{
		cout<<"Would you like to lose a life or a follower?(l/f)"<<endl;
		cin>>decision;
		if(decision=='l')
		{
			character->loseLive(1);
		}
		else if(decision=='f')
		{
			string followerChoice;
			cout<<"Witch follower would you like to discard?"<<endl;
			character->showFollowers();
			cin>>followerChoice;
			character->removeFollower(followerChoice);
		}

		cout<<i+1<<LifeGettingLost-(i+1)<<"to go."<<endl;
	}*/
}