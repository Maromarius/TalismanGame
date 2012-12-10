#include "Village.h"
#include "Area.h"

const string Village::NAME = "Village";
const string Village::DESCRIPTION =	"Visit only one of the following.\n"
									"Healer) The healer will restore Lives at the price of 1 Gold Coin each, back up to your starting total.\n"
									"Blacksmith) The Blacksmith sells the following objects (if available)\n"
									"Helmet - 2G, Sword - 2G, Axe - 2G, Shield - 2G, Armor - 4G.\n"
									"Mystic) Roll 1 Die.\n"
									"1-3) Ignored.\n"
									"4) If you are Evil or Neutral, you become Good.\n"
									"5) Gain 1 Craft.\n"
									"6) Gain 1 Spell.";

Village::Village(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Village::~Village()
{
}

void Village::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	char decision;
	cout<<"Who would you like to visite: the Healer, BlackSmith or Mystic?(h/b/m)"<<endl;
	cin>>decision;

	if(decision=='m')
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
		case(4):{
				string tempAlignment = character->getAlignment();
				if(tempAlignment =="Neutral"||tempAlignment =="Evil")
					character->setAlignment("Good");
				break;
				}
		case(5):cout<<"you gained one craft!"<<endl;
				character->gainCraft(1);
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
	else if(decision=='h')
	{
		while(true)
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
		}
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