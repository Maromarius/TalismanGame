#include "WarlocksCave.h"
#include "Area.h"

const string WarlocksCave::NAME = "Warlocks Cave";
const string WarlocksCave::DESCRIPTION =	"You may go on a quest.\n"
									"The Vampire will accept Followers instead of Lives.\n"
									"1) Lose a Life.\n"
									"2) Kill 1 Enemy.\n"
									"3) Deliver (discard) 1 Follower.\n"
									"4) Deliver (discard) 1 Magic Object. \n"
									"5) Deliver (discard) 3 Gold Coins. \n"
									"6) Deliver (discard) 2 Gold Coins. \n"
									"Continue with the game. When you complete your task, the Warlock immediatly teleports you back here\n"
									"(move directly without rolling) and gives you a talisman, if available, as your reward.\n";

WarlocksCave::WarlocksCave(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

WarlocksCave::~WarlocksCave()
{
}

void WarlocksCave::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
		case(1):cout<<"you lose a life!"<<endl;
				character->loseLive(1);	
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