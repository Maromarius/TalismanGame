#include "City.h"
#include "Area.h"

const string City::NAME = "City";
const string City::DESCRIPTION = "Visit only one of the following:\n"
									"Enchantress: Roll 1 die:\n"
									"\t1. You are turned into a Toad for 3 Turns\n"
									"\t2. Lose 1 Strength\n"
									"\t3. Lose 1 Craft\n"
									"\t4. Gain 1 Craft\n"
									"\t5. Gain 1 Strength\n"
									"\t6. Gain 1 Spell\n"
									"Doctor: He will Heal up to 2 Lives at the cost of 1 Gold Coin each.\n"
									"Alchemist: He will turn any of your Objects into Gold Coin. Discard the Objects you choose and take 1 Gold Coin for each.\n";

City::City(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

City::~City()
{
}

void City::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	char decision;
	cout<<"Who would you like to visite: the Enchantress, Doctor or Alchemist?(e/d/a)"<<endl;
	cin>>decision;

	if(decision=='e')
	{
		int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
		case(1):cout<<"you almost turned into a Toad!"<<endl;
					break;
		case(2):cout<<"you loose one strength!"<<endl;
				character->loseStrength(1);
				break;
		case(3):cout<<"you loose one craft!"<<endl;
				character->loseCraft(1);
				break;
		case(4):cout<<"you gained one craft!"<<endl;
				character->gainCraft(1);
				break;
		case(5):cout<<"you gained one strength!"<<endl;
				character->gainStrength(1);
				break;
		case(6):cout<<"you gained a spell!"<<endl;
				/*Card temp = spellCards->draw();
					if(character.hasRoomForSpells())
						character.addSpell(temp);
					else
						this->Cards.push_back(temp);*/
				break;
		}
	}
	else if(decision=='d')
	{
		char decision;
		cout<<"Would you like to gain a life at the cost of 1 gold?(y/n)"<<endl;
		cin>>decision;

		if(decision=='y')
		{	
			character->gainLive(1);
			character->loseGold(1);
		}
		else if(decision=='n')
			return;

		cout<<"Would you like to gain another life at the cost of 1 more gold?(y/n)"<<endl;
		cin>>decision;

		if(decision=='y')
		{	
			character->gainLive(1);
			character->loseGold(1);
		}
		else if(decision=='n')
			return;
	}
	else if(decision=='a')
	{
		cout<<"Witch item would you like to turn to gold?"<<endl;
		character->showBag();
		string item;
		cin>>item;
		character->removeObject(item);
		character->gainGold(1);
	}


	character->printStats();
	return;
}