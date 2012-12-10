#include "Village.h"
#include "Area.h"
#include "Helmet.h"
#include "Sword.h"
#include "Armour.h"
#include "Shield.h"
#include "Axe.h"


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
	else if(decision=='b')
	{
		string tempName;
		
		cout<<"Witch item would you like to buy?(helmet/sword/axe/shield/armor)"<<endl;
		cin>>tempName;
		if(tempName=="helmet")
		{
			if (character->getGold()<2)
			{
				cout<<"Sorry, you can't afford this"<<endl;
				return;
			}
			else
			{
				BattleObject* tempObj = new Helmet();
				character->addFollower(*tempObj);
				character->loseGold(2);
			}
		}
		else if(tempName=="sword")
		{
			if (character->getGold()<2)
			{
				cout<<"Sorry, you can't afford this"<<endl;
				return;
			}
			else
			{
				BattleObject* tempObj = new Sword();
				character->addFollower(*tempObj);
				character->loseGold(2);
			}
		}
		else if(tempName=="shield")
		{
			if (character->getGold()<2)
			{
				cout<<"Sorry, you can't afford this"<<endl;
				return;
			}
			else
			{
				BattleObject* tempObj = new Shield();
				character->addFollower(*tempObj);
				character->loseGold(2);
			}
		}
		else if(tempName=="axe")
		{
			if (character->getGold()<2)
			{
				cout<<"Sorry, you can't afford this"<<endl;
				return;
			}
			else
			{
				BattleObject* tempObj = new Axe();
				character->addFollower(*tempObj);
				character->loseGold(2);
			}
		}
		else if(tempName=="armour")
		{
			if (character->getGold()<4)
			{
				cout<<"Sorry, you can't afford this"<<endl;
				return;
			}
			else
			{
				BattleObject* tempObj = new Armour();
				character->addFollower(*tempObj);
				character->loseGold(4);
			}
		}
	}


	character->printStats();
	return;
}