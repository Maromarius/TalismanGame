#include "Temple.h"
#include "Area.h"
#include "Talisman.h"

const string Temple::NAME = "Temple";
const string Temple::DESCRIPTION =	"Pray by rolling 2 Dice.\n"
									"2)Lose 3 Lives.\n"
									"3)Lose 1 Life.\n"
									"4)Lose 1 Life or 1 follower.\n"
									"5)Enslaved. You stay here until you roll a 4,5 or 6 on 1 die for your Move.\n"
									"6)Gain 1 Strength.\n"
									"7)Gain 1 Craft.\n"
									"8)Gain 1 Spell.\n"
									"9)Gain 1 Spell.\n"
									"10)Gain a Talisman.\n"
									"11)Gain 1 Life.\n"
									"12)Gain 2 Lives.";

Temple::Temple(int areaNumber) : Area(NAME, DESCRIPTION, areaNumber)
{
}

Temple::~Temple()
{
}

void Temple::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{/*
		int diceRoll1;
		int diceRoll2;

		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll1<<" ...";

		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll2 = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll2<<" ...";



		switch((diceRoll1=diceRoll2))
		{
		case(1):cout<<"lose 3 lives!"<<endl;
				character->loseLive(3);
				break;
		case(2):cout<<"lose a life!"<<endl;
				character->loseLive(1);
				break;
		case(3):cout<<"you loose one gold!"<<endl;
				char decision;
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
				break;
		case(4):cout<<"you gained one gold!"<<endl;
				character->gainGold(1);
				break;
		case(5):cout<<"you are traped!"<<endl;
			character->setIdleTurns(1);
			break;
		case(6):cout<<"you gained one Strength!"<<endl;
				character->gainStrength(1);
				break;
		case(7):cout<<"you gained one Craft!"<<endl;
				character->gainCraft(1);
				break;
		case(8):
		case(9):cout<<"you can draw a spell!"<<endl;
				if(Cards.size()==0)
				{
					Card tempSpell = spellCards->draw();
					cout<<"you drew the "<<tempSpell.getName()<<"\nDescription: "<<tempSpell.getDescription()<<endl;
					if(character->hasRoomForSpells())
						character->addSpell(tempSpell);
					else{
						Cards.push_back(tempSpell);
						cout<<"you have to leave that spell here because you have no room for spells"<<endl;}
				}
				else
				{
					Card tempSpell = Cards.back();
					Cards.pop_back();
					cout<<"you picked the "<<tempSpell.getName()<<"\nDescription: "<<tempSpell.getDescription()<<endl;
					if(character->hasRoomForSpells())
						character->addSpell(tempSpell);
					else{
						Cards.push_back(tempSpell);
						cout<<"you have to leave that spell here because you have no room for spells"<<endl;}
				}
				break;
		case(10):{cout<<"YOU GET A TALISMAN!"<<endl;
				Card *talisman = new Talisman();
				if(character->isBagFull())
					cout<<"Sorry, you have no room for it!"<<endl;
				else
					character->addObject(*talisman);
				break;}
		case(11):cout<<"gain a life!"<<endl;
				character->gainLive(1);
				break;
		case(12):cout<<"gain 2 lives!"<<endl;
				character->gainLive(2);
				break;
		}*/
}