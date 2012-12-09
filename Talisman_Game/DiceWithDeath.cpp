#include "DiceWithDeath.h"
#include "Area.h"

const string DiceWithDeath::NAME = "Dice With Death";
const string DiceWithDeath::DESCRIPTION =	"You Must/n"
											"Roll 2 dice for yourself and 2 for Death. If the Scores are equal: You must Dice with Death again on your next\n"
											"Turn. If your score is lower: You lose 1 life and must Dice with Dice again on your next Turn.\n"
											"If your score is higher: You may move on your next Turn.\n";

DiceWithDeath::DiceWithDeath(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

DiceWithDeath::~DiceWithDeath()
{
}

void DiceWithDeath::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	int diceRoll1;
	int diceRoll2;
	int diceRoll3;
	int diceRoll4;


	cout<<"Press an key to roll your first die."<<endl;
	srand((unsigned int)time(0));
	diceRoll1 = ((int) rand() % 6 + 1);

	cout<<"Press an key to roll your second die."<<endl;
	srand((unsigned int)time(0));
	diceRoll2 = ((int) rand() % 6 + 1);
			
	cout<<"You rolled a "<<diceRoll1<<"& "<<diceRoll2<<endl;
	int yourRoll = diceRoll1 + diceRoll2 ;

	cout<<"Press an key to roll death's first die."<<endl;
	srand((unsigned int)time(0));
	diceRoll3 = ((int) rand() % 6 + 1);

	cout<<"Press an key to roll death's second die."<<endl;
	srand((unsigned int)time(0));
	diceRoll4 = ((int) rand() % 6 + 1);
			
	cout<<"Death rolled a "<<diceRoll3<<"& "<<diceRoll4<<endl;
	int deathRoll = diceRoll3 + diceRoll4 ;

	if(yourRoll>deathRoll)
	{
		cout<<"You win againsth Death! You may move on your next turn."<<endl;
	}
	else if(yourRoll==deathRoll)
	{
		cout<<"It's a draw! You will need to Dice with Death again Next Turn!"<<endl;
	}
	else if(yourRoll<deathRoll)
	{
			cout<<"You lose! You lose a life and will need to Dice with Death again Next Turn!"<<endl;
			character->loseLive(1);
	}
}