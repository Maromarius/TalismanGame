#include "Mines.h"
#include "Area.h"

const string Mines::NAME = "Mines";
const string Mines::DESCRIPTION =	"Roll 3 Dice\n"
									"Substract your current Craft from the total for your come out:\n"
									"\t0. Mines\n"
									"\t1. Plain of Peril\n"
									"\t2-3. Portal of Power\n"
									"\t4-5. Warlock's Cave\n"
									"\t6+. Tavern\n";

Mines::Mines(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Mines::~Mines()
{
}

void Mines::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	int diceRoll1;
	int diceRoll2;
	int diceRoll3;

	cout<<"Press an key to roll the first die."<<endl;
	srand((unsigned int)time(0));
	diceRoll1 = ((int) rand() % 6 + 1);

	cout<<"Press an key to roll the second die."<<endl;
	srand((unsigned int)time(0));
	diceRoll2 = ((int) rand() % 6 + 1);

	cout<<"Press an key to roll the third die."<<endl;
	srand((unsigned int)time(0));
	diceRoll3 = ((int) rand() % 6 + 1);
			
	cout<<"You rolled a "<<diceRoll1<<", "<<diceRoll2<<"& "<<diceRoll3<<endl;
	int totalRoll = diceRoll1 + diceRoll2 + diceRoll3 - character->getCraft();
	cout<<"Your total roll comes out to a "<<totalRoll<<" ... ";
}