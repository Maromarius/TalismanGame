#include "Tavern.h"
#include "Area.h"
#include "Enemy.h"

const string Tavern::NAME = "Tavern";
const string Tavern::DESCRIPTION =	"You must roll the die for the following result.\n"
									"1)You got blind drunk and collapsed in a corner. Miss 1 Turn.\n"
									"2)You got tipsy and got in a fight with a farmer (STRENGTH 3).\n"
									"3)You gamble and lose 1 gold.\n"
									"4)You gamble and win 1 gold.\n"
									"5)A drunkard offers to Teleport you to any Outer Region space of your choice on your next Move.\n"
									"6)A boatman offers to Ferry you to the Temple on your next Move.";

Tavern::Tavern(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Tavern::~Tavern()
{
}

void Tavern::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{/*
	int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
		case(1):cout<<"lose your next turn!"<<endl;
				character->setIdleTurns(1);	
				break;
		case(2):{cout<<"you get in a fight!"<<endl;
				Enemy *farmer = new Enemy("Farmer", "a drunk farmer from the Tavern, you can totally take him!","farmer",5,0,3);		
				character->battleMonster(*farmer);
				break;}
		case(3):cout<<"you loose one gold!"<<endl;
				character->loseGold(1);
				break;
		case(4):cout<<"you gained one gold!"<<endl;
				character->gainGold(1);
				break;
		case(5):cout<<"you met the drunkard!"<<endl;
				break;
		case(6):cout<<"you met the boatman!"<<endl;
				break;
		}*/
}