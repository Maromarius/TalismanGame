#include "Crypt.h"
#include "Area.h"

const string Crypt::NAME = "Crypt";
const string Crypt::DESCRIPTION =	"Roll 3 Dice\n"
									"Substract your Strength from the total for your exit:\n"
									"\t0. Crypt\n"
									"\t1. Plain of Peril\n"
									"\t2-3. Portal of Power\n"
									"\t4-5. Warlock's Cave\n"
									"\t6+. City\n";

Crypt::Crypt(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Crypt::~Crypt()
{
}

void Crypt::effect(Character character, Deck* adventureCards, Deck* spellCards)
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
	int totalRoll = diceRoll1 + diceRoll2 + diceRoll3 - character.getStrength();
	cout<<"Your total roll comes out to a "<<totalRoll<<" ... ";

	return;
}