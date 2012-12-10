#include "Area.h"
#include <string>
#include <iostream>
using namespace std;

Area::Area()
{
	this->areaName="";
	this->areaDescription="";
	this->left = NULL;
	this->right = NULL;
}

Area::Area(string name)
{
	this->mapAreaNumber=24;
	this->areaName=name;
	this->areaDescription="";
	this->left = NULL;
	this->right = NULL;
}

Area::Area(string name, string description, int areaNumber)
{
	this->mapAreaNumber=areaNumber;
	this->areaName=name;
	this->areaDescription=description;
	this->left = NULL;
	this->right = NULL;
}

Area::~Area()
{
}

void Area::setRaftDestination(Area* destination)
{
	this->raftDestination.push_back(destination);
}
string Area::getRaftDestination(void)
{
	if (raftDestination.size()>0)
		return this->raftDestination.back()->getAreaName();
	else
		return "none";
}

string Area::getAreaName()
{
	return this->areaName;
}

string Area::getAreaDescription()
{
	return this->areaDescription;
}

int Area::getAreaMapNumber()
{
return this->mapAreaNumber;
}

Area* Area::getRight()
{
	return this->right;
}

Area* Area::getLeft()
{
	return this->left;
}


void Area::effect(Character* character, Deck* adventureCards, Deck* spellCards)
{
	if(this->areaName == "Cursed Glade"){
		Card card;		
		if(CursedGlade.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *CursedGlade.back();
			CursedGlade.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					CursedGlade.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				CursedGlade.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			CursedGlade.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Fields"){	
		Card card;		
		if(Fields.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *Fields.back();
			Fields.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Fields.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				Fields.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Fields.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Hills"){
		Card card;		
		if(Hills.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *Hills.back();
			Hills.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Hills.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				Hills.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Hills.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Plains"){
		Card card;		
		if(Plains.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *Plains.back();
			Plains.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Plains.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				Plains.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Plains.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Portal of Power"){
		Card card;		
		if(PortalOfPower.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *PortalOfPower.back();
			PortalOfPower.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					PortalOfPower.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				PortalOfPower.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			PortalOfPower.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Ruins"){
		Card card;		
		if(Ruins.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *Ruins.back();
			Ruins.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Ruins.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				Ruins.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Ruins.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Woods"){
		Card card;		
		if(Woods.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *Woods.back();
			Woods.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Woods.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				Woods.push_back(&card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Woods.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Hidden Valley"){
		Card card;		
		for(int i = 0; i < 3; i++){
			if(HiddenValley.size() == 0)
			{
				card= adventureCards->draw();
				cout << "Drawing Card..." << endl;
				cout<<card.getType()<<endl;
			}
			else
			{
				card = *HiddenValley.back();
				Woods.pop_back();
				cout << "Picking up..." << endl;
			}
			card.print();

			if(card.getType() == "Enemy"){
				bool wins = character->battleMonster(card);
				if(wins){
					adventureCards->discard(card);
				}
				else{
						HiddenValley.push_back(&card);
				}
			}
			else if(card.getType() == "Follower"){
				character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
			}
			else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
				if(!character->isBagFull()){
					character->addObject(&card);
					cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
				}
				else
					HiddenValley.push_back(&card);
			}		
			else if(card.getType() == "Place" || card.getType() == "Stranger"){
				HiddenValley.push_back(&card);
				cout << "The card has been placed on this Area." <<endl<<endl;
			}
		}

	}
	else if(this->areaName == "Oasis"){
		Card card;		
		for(int i = 0; i < 2; i++){
			if(Oasis.size() == 0){
				card= adventureCards->draw();
				cout << "Drawing Card..." << endl;
				cout<<card.getType()<<endl;
			}
			else
			{
				card = *Oasis.back();
				Woods.pop_back();
				cout << "Picking up..." << endl;
			}
			card.print();

			if(card.getType() == "Enemy"){
				bool wins = character->battleMonster(card);
				if(wins){
					adventureCards->discard(card);
				}
				else{
						Oasis.push_back(&card);
				}
			}
			else if(card.getType() == "Follower"){
				character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
			}
			else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
				if(!character->isBagFull()){
					character->addObject(&card);
					cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
				}
				else
					Oasis.push_back(&card);
			}		
			else if(card.getType() == "Place" || card.getType() == "Stranger"){
				Oasis.push_back(&card);
				cout << "The card has been placed on this Area." <<endl<<endl;
			}
		}
	}	
	else if(this->areaName == "Werewolf Den"){
		cout<<"You are attacked by a WereWolf!"<<endl;
	
		int diceRoll1,diceRoll2;

		cout<<"Press any key to roll the first die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll the second die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll2 = ((int) rand() % 6 + 1);

		Enemy *WereWolf = new Enemy("WereWolf", "a WereWolf from the Den.","WereWolf",5,0,(diceRoll1+diceRoll2));		
		bool killedWereWolf = character->battleMonster(*WereWolf);

		if(!killedWereWolf)
			character->setIdleTurns(1);
	}
	else if(this->areaName == "Warlocks Cave"){
		int diceRoll;
		cout<<"Press any key to roll the die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
		case(1):cout<<"you lose a life!"<<endl;
				character->loseLive(1);	
				break;
		case(2):cout<<"you gain one strength!"<<endl;
				character->gainStrength(1);
				break;
		case(3):{string tempName;
				cout<<"you must discard a follower! Witch one will you lose?(enter name)"<<endl;
				cin>>tempName;
				character->removeFollower(tempName);
				break;}
		case(4):{string tempName;
				cout<<"you must discard an Object! Witch one will you lose?(enter name)"<<endl;
				cin>>tempName;
				character->removeObject(tempName);
				break;}
		case(5):cout<<"you lose 3 gold!"<<endl;
				character->loseGold(3);
				break;
		case(6):cout<<"you lose 2 gold!"<<endl;
				character->loseGold(2);
				break;
		}
	}
	else if(this->areaName == "Village"){
		char decision;
		cout<<"Who would you like to visit: the Healer, BlackSmith or Mystic?(h/b/m)"<<endl;
		cin>>decision;

		if(decision=='m')
		{
			int diceRoll;
			cout<<"Press any key to roll the die."<<endl;
			system("PAUSE");
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
						if(character->hasRoomForSpells()){
							Card temp = spellCards->draw();
							character->addSpell(&temp);cout<<"You learned a spell!"<<endl<<endl;
						}
						else
							cout << "No more room for spells!" << endl;
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
					character->addObject(tempObj);
					character->loseGold(2);
					cout << "You bought the Helmet!" << endl;
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
					character->addObject(tempObj);
					character->loseGold(2);
					cout << "You bought the Sword!" << endl;
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
					character->addObject(tempObj);
					character->loseGold(2);
					cout << "You bought the Shield!" << endl;
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
					character->addObject(tempObj);
					character->loseGold(2);
					cout << "You bought the Axe!" << endl;
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
					character->addObject(tempObj);
					character->loseGold(4);
					cout << "You bought the Armour!" << endl;
				}
			}
		}


		character->printStats();
		return;
	}
	else if(this->areaName == "Vampires Tower"){
		int diceRoll;
		int LifeGettingLost;
		char decision;

		cout<<"Press any key to roll the die."<<endl;
		system("PAUSE");
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
		}
	}
	else if(this->areaName == "Temple"){
		int diceRoll1;
		int diceRoll2;

		cout<<"Press any key to roll the first die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll1<<" ...";

		cout<<"Press any key to roll the second die."<<endl;
		system("PAUSE");
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
				if(Temple.size()==0)
				{
					Card tempSpell = spellCards->draw();
					cout<<"you drew the "<<tempSpell.getName()<<"\nDescription: "<<tempSpell.getDescription()<<endl;
					if(character->hasRoomForSpells())
						character->addSpell(&tempSpell);
					else{
						Temple.push_back(&tempSpell);
						cout<<"you have to leave that spell here because you have no room for spells"<<endl;}
				}
				else
				{
					Card tempSpell = *Temple.back();
					Temple.pop_back();
					cout<<"you picked the "<<tempSpell.getName()<<"\nDescription: "<<tempSpell.getDescription()<<endl;
					if(character->hasRoomForSpells())
						character->addSpell(&tempSpell);
					else{
						Temple.push_back(&tempSpell);
						cout<<"you have to leave that spell here because you have no room for spells"<<endl;}
				}
				break;
		case(10):{cout<<"YOU GET A TALISMAN!"<<endl;
				Card *talisman = new Talisman();
				if(character->isBagFull())
					cout<<"Sorry, you have no room for it!"<<endl;
				else
					character->addObject(talisman);
				break;}
		case(11):cout<<"gain a life!"<<endl;
				character->gainLive(1);
				break;
		case(12):cout<<"gain 2 lives!"<<endl;
				character->gainLive(2);
				break;
		}
	}
	else if(this->areaName == "Tavern"){
		int diceRoll;
		cout<<"Press any key to roll the die."<<endl;
		system("PAUSE");
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
		}
	}
	else if(this->areaName == "Sentinel"){
		Card card;		
		if(Sentinel.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = *Sentinel.back();
			Sentinel.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = character->battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
				Sentinel.push_back(&card);
			}
		}
		else if(card.getType() == "Follower"){
			character->addFollower(&card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!character->isBagFull()){
				character->addObject(&card);
				cout<<"\nThis Object has been added to your Bag!" <<endl<<endl;
			}
			else
				Sentinel.push_back(&card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Sentinel.push_back(&card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	else if(this->areaName == "Plain of Peril"){
		cout<<"Welcome to the Plain of peril, take a break here, nothing will happen to you!"<<endl;
	}
	else if(this->areaName == "Pits"){
		int diceRoll=1;
		if (character->getIdleTurns()>0)
		{
			diceRoll=character->getIdleTurns();
		}
		else
		{
			cout<<"Press any key to roll the die."<<endl;
			system("PAUSE");
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
		}	
		cout<<diceRoll<<" Pittlord(s) Attack you!!"<<endl;
		character->setIdleTurns(diceRoll-1);

		Enemy *PitLord = new Enemy("PitLord", "a self-intitle Lord of this Pit.","Pitlord",5,0,4);		
		character->battleMonster(*PitLord);
	}
	else if(this->areaName == "Mines"){
		int diceRoll1;
		int diceRoll2;
		int diceRoll3;

		cout<<"Press any key to roll the first die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll the second die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll2 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll the third die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll3 = ((int) rand() % 6 + 1);
			
		cout<<"You rolled a "<<diceRoll1<<", "<<diceRoll2<<"& "<<diceRoll3<<endl;
		int totalRoll = diceRoll1 + diceRoll2 + diceRoll3 - character->getCraft();
		cout<<"Your total roll comes out to a "<<totalRoll<<" ... ";
	}
	else if(this->areaName == "Graveyard"){
		if(character->getAlignment()=="Good")
		{
			cout<<"You are Evil, so you will lose a life."<<endl;
			character->loseLive(1);
		}
		else if(character->getAlignment()=="Neutral")
		{
				char decision;
				cout<<"Would you like to gain Fate at the cost of 1 gold?(y/n)"<<endl;
				cin>>decision;

				if(decision=='y')
				{	
					character->replenishFate(1);
					character->printStats();
					return;
				}
				else if(decision=='n')
					return;
		}
		else if(character->getAlignment()=="Evil")
		{
			char decision;
			cout<<"Would you like to replenish your Fate for free or Pray?(h/p)"<<endl;
			cin>>decision;

			if(decision=='h')
			{	
				character->replenishFate(1);
			}
			else if(decision=='p')
			{
				int diceRoll;
				cout<<"Press any key to roll the die."<<endl;
				system("PAUSE");
				srand((unsigned int)time(0));
				diceRoll = ((int) rand() % 6 + 1);
				cout<<"You rolled a "<<diceRoll<<" ...";

				switch(diceRoll)
				{
					case(1):
					case(2):
					case(3):
					case(4):cout<<"nothing happened."<<endl;
						break;
					case(5):cout<<"you gained a life!"<<endl;
						character->gainFate(1);
						break;
					case(6):cout<<"you gained a spell!"<<endl;
						if(character->hasRoomForSpells()){
							Card temp = spellCards->draw();
							character->addSpell(&temp);cout<<"You learned a spell!"<<endl<<endl;
						}
						else
							cout << "You do not have any room for spells!" << endl;
						break;
				}
			}
		}
	
		character->printStats();
		return;
	}
	else if(this->areaName == "Forest"){
		int diceRoll;
		cout<<"Press any key to roll the die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
			case(1):{cout<<"you are attacked by a brigand!"<<endl;
				Enemy *brigand = new Enemy("Brigand", "a brigand from the Forest.","brigand",5,0,4);		
				character->battleMonster(*brigand);
				break;}
			case(2):cout<<"you loose one turn!"<<endl;
				break;
			case(3):cout<<"you loose one turn!"<<endl;
				break;
			case(4):cout<<"nothing happened."<<endl;
				break;
			case(5):cout<<"nothing happened."<<endl;
				break;
			case(6):cout<<"a Ranger came to your aid, you gained one craft!"<<endl;
				character->gainCraft(1);
				break;
		}
		character->printStats();
		return;
	}
	else if(this->areaName == "Dice With Death"){
		int diceRoll1;
		int diceRoll2;
		int diceRoll3;
		int diceRoll4;


		cout<<"Press any key to roll your first die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll your second die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll2 = ((int) rand() % 6 + 1);
			
		cout<<"You rolled a "<<diceRoll1<<"& "<<diceRoll2<<endl;
		int yourRoll = diceRoll1 + diceRoll2 ;

		cout<<"Press any key to roll death's first die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll3 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll death's second die."<<endl;
		system("PAUSE");
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
			character->setIdleTurns(1);
		}
		else if(yourRoll<deathRoll)
		{
				cout<<"You lose! You lose a life and will need to Dice with Death again Next Turn!"<<endl;
				character->loseLive(1);
				character->setIdleTurns(1);
		}
	}
	else if(this->areaName == "Desert"){
		if(character->hasWaterBottle())
		{
			char decision;
			cout<<"You will lose a life if you do not use your Water Bottle. Would you like to use it?(y/n)"<<endl;
			cin>>decision;
			if(decision=='y')
			{
				character->removeObject("WaterBottle");
				character->setHasWaterBottle(false);
			}
			else if (decision=='n')
			{
				character->loseLive(1);
			}
		}
		else
			character->loseLive(1);
	}
	else if(this->areaName == "Crypt"){
		int diceRoll1;
		int diceRoll2;
		int diceRoll3;

		cout<<"Press any key to roll the first die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll the second die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll2 = ((int) rand() % 6 + 1);

		cout<<"Press any key to roll the third die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll3 = ((int) rand() % 6 + 1);
			
		cout<<"You rolled a "<<diceRoll1<<", "<<diceRoll2<<"& "<<diceRoll3<<endl;
		int totalRoll = diceRoll1 + diceRoll2 + diceRoll3 - character->getStrength();
		cout<<"Your total roll comes out to a "<<totalRoll<<" ... ";

		return;
	}
	else if(this->areaName == "Crags"){
		int diceRoll;
		cout<<"Press any key to roll the die."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
			case(1):{cout<<"you are attacked by a Spirit!"<<endl;
				Enemy *spirit = new Enemy("Spirit", "a spirit from the Crags.","Spirit",5,4,0);		
				character->battleMonster(*spirit);
				break;}
			case(2):cout<<"you loose one turn!"<<endl;
				character->setIdleTurns(1);
				break;
			case(3):cout<<"you loose one turn!"<<endl;
				character->setIdleTurns(1);
				break;
			case(4):cout<<"nothing happened."<<endl;
				break;
			case(5):cout<<"nothing happened."<<endl;
				break;
			case(6):cout<<"a Barbarian came to your aid, you gained one strength!"<<endl;
				character->gainStrength(1);
				break;
			}
		character->printStats();
		return;
	}
	else if(this->areaName == "City"){
		char decision;
		cout<<"Who would you like to visit: the Enchantress, Doctor or Alchemist?(e/d/a)"<<endl;
		cin>>decision;

		if(decision=='e')
		{
			int diceRoll;
			cout<<"Press any key to roll the die."<<endl;
			system("PAUSE");
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
						if(character->hasRoomForSpells()){
							Card temp = spellCards->draw();
							character->addSpell(&temp);cout<<"You learned a spell!"<<endl<<endl;
						}
						else
							cout << "No more room for spells!" << endl;
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
			if(!character->isBagEmpty())
			{
				cout<<"Which item would you like to turn to gold?(enter name)"<<endl;
				character->showBag();
				string item;
				cin>>item;
				character->removeObject(item);
				character->gainGold(1);
			}
			else
				cout << "You have no Objects inside of your bag!"<<endl<<endl;
		}


		character->printStats();
		return;
	}
	else if(this->areaName == "Chasm"){
		int diceRoll;
		cout<<"Press any key to roll the die for yourselve."<<endl;
		system("PAUSE");
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";
		if(diceRoll==1 || diceRoll==2)
		{
			cout<<"you lose a life!"<<endl;
			character->loseLive(1);
		}
		else
		{
			cout<<"noting happened."<<endl;
		}
	
		for(int i=0;i<character->getNumFollowers();i++)
		{
			cout<<"Press any key to roll the die for your follower."<<endl;
			system("PAUSE");
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
			cout<<"You rolled a "<<diceRoll<<" ...";
			if(diceRoll==1 || diceRoll==2)
			{
				cout<<character->showFollower(i)<<" died!"<<endl;
				character->removeFollower(i);
			}
			else
			{
				cout<<"noting happened."<<endl;
			}
	
		}

		character->printStats();
		return;
	}
	else if(this->areaName == "Chapel"){
		if(character->getAlignment()=="Evil")
		{
			cout<<"You are Evil, so you will lose a life."<<endl;
			character->loseLive(1);
		}
		else if(character->getAlignment()=="Neutral")
		{
			while(true)
			{
				char decision;
				cout<<"Would you like to heal yourself at the cost of 1 gold?(y/n)"<<endl;
				cin>>decision;

				if(decision=='y')
				{	
					character->replenishLives(0);
					character->printStats();
					return;
				}
				else if(decision=='n')
					return;
			}			
		}
		else if(character->getAlignment()=="Good")
		{
			char decision;
			cout<<"Would you like to heal yourself for free or Pray?(h/p)"<<endl;
			cin>>decision;

			if(decision=='h')
			{	
				character->replenishLives(0);
			}
			else if(decision=='p')
			{
				int diceRoll;
				cout<<"Press any key to roll the die."<<endl;
				system("PAUSE");
				srand((unsigned int)time(0));
				diceRoll = ((int) rand() % 6 + 1);
				cout<<"You rolled a "<<diceRoll<<" ...";

				switch(diceRoll)
				{
				case(1):
				case(2):
				case(3):
				case(4):cout<<"nothing happened."<<endl;
						break;
				case(5):cout<<"you gained a life!"<<endl;
						character->gainLive(1);
						break;
				case(6):cout<<"you gained a spell!"<<endl;						
						if(character->hasRoomForSpells()){
							Card temp = spellCards->draw();
							character->addSpell(&temp);cout<<"You learned a spell!"<<endl<<endl;
						}
						else
							cout << "No more room for spells!" << endl;
						break;
				}
			}
		}
	
		character->printStats();
		return;
	}
	else if(this->areaName == "Castle"){
		char decision;
		cout<<"Would you like to heal yourself at the cost of 1 gold?(y/n)"<<endl;
		cin>>decision;

		if(decision=='y')
		{	
			character->replenishLives(0);
			if (character->hasThisFollower("Prince")||character->hasThisFollower("Princess"))
				character->replenishLives(2);
			character->loseGold(1);
		}
		else if(decision=='n')
			return;

		character->printStats();
		return;
	}
	else if(this->areaName == "Black Knight"){
		char decision;
		cout<<"Would you like to give up a gold or lose a life?(g/l)"<<endl;
		cin>>decision;

		if(decision=='g')
			character->loseGold(1);
		else if(decision=='l')
			character->loseLive(1);

		character->printStats();
		return;
	}
}
