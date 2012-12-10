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
	this->mapAreaNumber=48;
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


void Area::effect(Character c, Deck* adventureCards, Deck* spellCards)
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
			card = CursedGlade.back();
			CursedGlade.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					CursedGlade.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				CursedGlade.push_back(card);
		}		
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			CursedGlade.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Fields"){
		Card card;		
		if(Fields.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Fields.back();
			Fields.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Fields.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Fields.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Fields.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Hills"){
		Card card;		
		if(Hills.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Hills.back();
			Hills.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Hills.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull())
			{
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Hills.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Hills.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Plains"){
		Card card;		
		if(Plains.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Plains.back();
			Plains.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Plains.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Plains.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Plains.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Portal of Power"){
		Card card;		
		if(PortalOfPower.size() == 0)
		{
			card = adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = PortalOfPower.back();
			PortalOfPower.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
				PortalOfPower.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				PortalOfPower.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			PortalOfPower.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Ruins"){
		Card card;		
		if(Ruins.size() == 0)
		{
			card = adventureCards->draw();cout<<card.getType()<<endl;
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Ruins.back();
			Ruins.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Ruins.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Ruins.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Ruins.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Woods"){
		Card card;
		if(Woods.size() == 0)
		{
			card = adventureCards->draw();cout<<card.getType()<<endl;
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Woods.back();
			Woods.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
					Woods.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull())
			{
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Woods.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Woods.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Runes"){
		Card card;		
		if(Runes.size() == 0)
		{
			card = adventureCards->draw();cout<<card.getType()<<endl;
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Runes.back();
			Runes.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
				Runes.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Runes.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Runes.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Hidden Valley"){
		Card card;		
		for(int i = 0; i < 3; i++){
			if(HiddenValley.size() == 0)
			{
				card = adventureCards->draw();cout<<card.getType()<<endl;
				cout << "Drawing Card..." << endl;
				cout<<card.getType()<<endl;
			}
			else
			{
				card = HiddenValley.back();
				HiddenValley.pop_back();
				cout << "Picking up..." << endl;
			}
			card.print();

			if(card.getType() == "Enemy"){
				bool wins = c.battleMonster(card);
				if(wins){
					adventureCards->discard(card);
				}
				else{
						HiddenValley.push_back(card);
				}
			}
			else if(card.getType() == "Follower"){
				c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
			}
			else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
				if(!c.isBagFull())
				{
					c.addObject(card);
					cout<<"This object has been added to your Bag!" <<endl<<endl;
				}
				else
					HiddenValley.push_back(card);
			}
			else if(card.getType() == "Place" || card.getType() == "Stranger"){
				HiddenValley.push_back(card);
				cout << "The card has been placed on this Area." <<endl<<endl;
			}
		}

	}
	if(this->areaName == "Oasis"){
		Card card;		
		for(int i = 0; i < 2; i++){
			if(Oasis.size() == 0)
			{
				card = adventureCards->draw();cout<<card.getType()<<endl;
				cout << "Drawing Card..." << endl;
				cout<<card.getType()<<endl;
			}
			else
			{
				card = Oasis.back();
				Oasis.pop_back();
				cout << "Picking up..." << endl;
			}
			card.print();

			if(card.getType() == "Enemy"){
				bool wins = c.battleMonster(card);
				if(wins){
					adventureCards->discard(card);
				}
				else{
						Oasis.push_back(card);
				}
			}
			else if(card.getType() == "Follower"){
				c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
			}
			else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
				if(!c.isBagFull()){
					c.addObject(card);cout<<"This object has been added to your Bag!" <<endl<<endl;
				}
				else
					Oasis.push_back(card);
			}
			else if(card.getType() == "Place" || card.getType() == "Stranger"){
				Oasis.push_back(card);
				cout << "The card has been placed on this Area." <<endl<<endl;
			}
		}
	}	
	if(this->areaName == "Werewolf Den"){
		cout<<"You are attacked by a WereWolf!"<<endl;
	
		int diceRoll1,diceRoll2;

		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll1 = ((int) rand() % 6 + 1);

		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll2 = ((int) rand() % 6 + 1);

		Enemy *WereWolf = new Enemy("WereWolf", "a WereWolf from the Den.","WereWolf",5,0,(diceRoll1+diceRoll2));		
		bool killedWereWolf = c.battleMonster(*WereWolf);

		if(!killedWereWolf)
			c.setIdleTurns(1);
	}
	if(this->areaName == "Warlocks Cave"){
		int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
		case(1):cout<<"you lose a life!"<<endl;
				c.loseLive(1);	
				break;
		case(2):cout<<"you gain one strength!"<<endl;
				c.gainStrength(1);
				break;
		case(3):{string tempName;
				cout<<"you must discard a follower! Witch one will you lose?(enter name)"<<endl;
				cin>>tempName;
				c.removeFollower(tempName);
				break;}
		case(4):{string tempName;
				cout<<"you must discard an Object! Witch one will you lose?(enter name)"<<endl;
				cin>>tempName;
				c.removeObject(tempName);
				break;}
		case(5):cout<<"you lose 3 gold!"<<endl;
				c.loseGold(3);
				break;
		case(6):cout<<"you lose 2 gold!"<<endl;
				c.loseGold(2);
				break;
		}
	}
	if(this->areaName == "Village"){
		char decision;
		cout<<"Who would you like to visit: the Healer, BlackSmith or Mystic?(h/b/m)"<<endl;
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
					string tempAlignment = c.getAlignment();
					if(tempAlignment =="Neutral"||tempAlignment =="Evil")
						c.setAlignment("Good");
					break;
					}
			case(5):cout<<"you gained one craft!"<<endl;
					c.gainCraft(1);
					break;
			case(6):cout<<"you gained a spell!"<<endl;
						if(c.hasRoomForSpells()){
							Card temp = spellCards->draw();
							c.addSpell(temp);cout<<"You learned a spell!"<<endl<<endl;
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
					c.gainLive(1);
					c.loseGold(1);
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
				if (c.getGold()<2)
				{
					cout<<"Sorry, you can't afford this"<<endl;
					return;
				}
				else
				{
					BattleObject* tempObj = new Helmet();
					c.addObject(*tempObj);
					c.loseGold(2);
					cout << "You bought the Helmet!" << endl;
				}
			}
			else if(tempName=="sword")
			{
				if (c.getGold()<2)
				{
					cout<<"Sorry, you can't afford this"<<endl;
					return;
				}
				else
				{
					BattleObject* tempObj = new Sword();
					c.addObject(*tempObj);
					c.loseGold(2);
					cout << "You bought the Sword!" << endl;
				}
			}
			else if(tempName=="shield")
			{
				if (c.getGold()<2)
				{
					cout<<"Sorry, you can't afford this"<<endl;
					return;
				}
				else
				{
					BattleObject* tempObj = new Shield();
					c.addObject(*tempObj);
					c.loseGold(2);
					cout << "You bought the Shield!" << endl;
				}
			}
			else if(tempName=="axe")
			{
				if (c.getGold()<2)
				{
					cout<<"Sorry, you can't afford this"<<endl;
					return;
				}
				else
				{
					BattleObject* tempObj = new Axe();
					c.addObject(*tempObj);
					c.loseGold(2);
					cout << "You bought the Axe!" << endl;
				}
			}
			else if(tempName=="armour")
			{
				if (c.getGold()<4)
				{
					cout<<"Sorry, you can't afford this"<<endl;
					return;
				}
				else
				{
					BattleObject* tempObj = new Armour();
					c.addObject(*tempObj);
					c.loseGold(4);
					cout << "You bought the Armour!" << endl;
				}
			}
		}


		c.printStats();
		return;
	}
	if(this->areaName == "Vampires Tower"){
		int diceRoll;
		int LifeGettingLost;
		char decision;

		cout<<"Press an key to roll the first die."<<endl;
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
				c.loseLive(1);
			}
			else if(decision=='f')
			{
				string followerChoice;
				cout<<"Witch follower would you like to discard?"<<endl;
				c.showFollowers();
				cin>>followerChoice;
				c.removeFollower(followerChoice);
			}

			cout<<i+1<<LifeGettingLost-(i+1)<<"to go."<<endl;
		}
	}
	if(this->areaName == "Temple"){
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
				c.loseLive(3);
				break;
		case(2):cout<<"lose a life!"<<endl;
				c.loseLive(1);
				break;
		case(3):cout<<"you loose one gold!"<<endl;
				char decision;
				cout<<"Would you like to lose a life or a follower?(l/f)"<<endl;
				cin>>decision;
				if(decision=='l')
				{
					c.loseLive(1);
				}
				else if(decision=='f')
				{
					string followerChoice;
					cout<<"Witch follower would you like to discard?"<<endl;
					c.showFollowers();
					cin>>followerChoice;
					c.removeFollower(followerChoice);
				}
				break;
		case(4):cout<<"you gained one gold!"<<endl;
				c.gainGold(1);
				break;
		case(5):cout<<"you are traped!"<<endl;
			c.setIdleTurns(1);
			break;
		case(6):cout<<"you gained one Strength!"<<endl;
				c.gainStrength(1);
				break;
		case(7):cout<<"you gained one Craft!"<<endl;
				c.gainCraft(1);
				break;
		case(8):
		case(9):cout<<"you can draw a spell!"<<endl;
				if(Temple.size()==0)
				{
					Card tempSpell = spellCards->draw();
					cout<<"you drew the "<<tempSpell.getName()<<"\nDescription: "<<tempSpell.getDescription()<<endl;
					if(c.hasRoomForSpells())
						c.addSpell(tempSpell);
					else{
						Temple.push_back(tempSpell);
						cout<<"you have to leave that spell here because you have no room for spells"<<endl;}
				}
				else
				{
					Card tempSpell = Temple.back();
					Temple.pop_back();
					cout<<"you picked the "<<tempSpell.getName()<<"\nDescription: "<<tempSpell.getDescription()<<endl;
					if(c.hasRoomForSpells())
						c.addSpell(tempSpell);
					else{
						Temple.push_back(tempSpell);
						cout<<"you have to leave that spell here because you have no room for spells"<<endl;}
				}
				break;
		case(10):{cout<<"YOU GET A TALISMAN!"<<endl;
				Card *talisman = new Talisman();
				if(c.isBagFull())
					cout<<"Sorry, you have no room for it!"<<endl;
				else
					c.addObject(*talisman);
				break;}
		case(11):cout<<"gain a life!"<<endl;
				c.gainLive(1);
				break;
		case(12):cout<<"gain 2 lives!"<<endl;
				c.gainLive(2);
				break;
		}
	}
	if(this->areaName == "Tavern"){
		int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
			case(1):cout<<"lose your next turn!"<<endl;
				c.setIdleTurns(1);	
				break;
			case(2):{cout<<"you get in a fight!"<<endl;
				Enemy *farmer = new Enemy("Farmer", "a drunk farmer from the Tavern, you can totally take him!","farmer",5,0,3);		
				c.battleMonster(*farmer);
				break;}
			case(3):cout<<"you loose one gold!"<<endl;
				c.loseGold(1);
				break;
			case(4):cout<<"you gained one gold!"<<endl;
				c.gainGold(1);
				break;
			case(5):cout<<"you met the drunkard!"<<endl;
				break;
			case(6):cout<<"you met the boatman!"<<endl;
				break;
		}
	}
	if(this->areaName == "Sentinel"){
		Card card;		
		if(Sentinel.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing Card..." << endl;
			cout<<card.getType()<<endl;
		}
		else
		{
			card = Sentinel.back();
			Sentinel.pop_back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
			}
			else{
				Sentinel.push_back(card);
			}
		}
		else if(card.getType() == "Follower"){
			c.addFollower(card);cout<<"A follower has joined the party!"<<endl<<endl;
		}
		else if(card.getType() == "Magic Object" || card.getType() == "Battle Object"){
			if(!c.isBagFull()){
				c.addObject(card);
				cout<<"This object has been added to your Bag!" <<endl<<endl;
			}
			else
				Sentinel.push_back(card);
		}
		else if(card.getType() == "Place" || card.getType() == "Stranger"){
			Sentinel.push_back(card);
			cout << "The card has been placed on this Area." <<endl<<endl;
		}
	}
	if(this->areaName == "Plain of Peril"){
		cout<<"Welcome to the Plain of peril, take a break here, nothing will happen to you!"<<endl;
	}
	if(this->areaName == "Pits"){
		int diceRoll=1;
		if (c.getIdleTurns()>0)
		{
			diceRoll=c.getIdleTurns();
		}
		else
		{
			cout<<"Press an key to roll the die."<<endl;
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
		}	
		cout<<diceRoll<<" Pittlords Attack you!!"<<endl;
		c.setIdleTurns(diceRoll-1);

		Enemy *PitLord = new Enemy("PitLord", "a self-intitle Lord of this Pit.","Pitlord",5,0,4);		
		c.battleMonster(*PitLord);
	}
	if(this->areaName == "Mines"){
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
		int totalRoll = diceRoll1 + diceRoll2 + diceRoll3 - c.getCraft();
		cout<<"Your total roll comes out to a "<<totalRoll<<" ... ";
	}

	if(this->areaName == "Graveyard"){
		if(c.getAlignment()=="Good")
		{
			cout<<"You are Evil, so you will lose a life."<<endl;
			c.loseLive(1);
		}
		else if(c.getAlignment()=="Neutral")
		{
				char decision;
				cout<<"Would you like to gain Fate at the cost of 1 gold?(y/n)"<<endl;
				cin>>decision;

				if(decision=='y')
				{	
					c.replenishFate(1);
					c.printStats();
					return;
				}
				else if(decision=='n')
					return;
		}
		else if(c.getAlignment()=="Evil")
		{
			char decision;
			cout<<"Would you like to replenish your Fate for free or Pray?(h/p)"<<endl;
			cin>>decision;

			if(decision=='h')
			{	
				c.replenishFate(1);
			}
			else if(decision=='p')
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
					case(4):cout<<"nothing happened."<<endl;
						break;
					case(5):cout<<"you gained a life!"<<endl;
						c.gainFate(1);
						break;
					case(6):cout<<"you gained a spell!"<<endl;
						if(c.hasRoomForSpells()){
							Card temp = spellCards->draw();
							c.addSpell(temp);cout<<"You learned a spell!"<<endl<<endl;
						}
						else
							cout << "You do not have any room for spells!" << endl;
						break;
				}
			}
		}
	
		c.printStats();
		return;
	}
	if(this->areaName == "Forest"){
		int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
			case(1):{cout<<"you are attacked by a brigand!"<<endl;
				Enemy *brigand = new Enemy("Brigand", "a brigand from the Forest.","brigand",5,0,4);		
				c.battleMonster(*brigand);
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
				c.gainCraft(1);
				break;
		}
		c.printStats();
		return;
	}
	if(this->areaName == "Dice With Death"){
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
			c.setIdleTurns(1);
		}
		else if(yourRoll<deathRoll)
		{
				cout<<"You lose! You lose a life and will need to Dice with Death again Next Turn!"<<endl;
				c.loseLive(1);
				c.setIdleTurns(1);
		}
	}
	if(this->areaName == "Desert"){
		if(c.hasWaterBottle())
		{
			char decision;
			cout<<"You will lose a life if you do not use your Water Bottle. Would you like to use it?(y/n)"<<endl;
			cin>>decision;
			if(decision=='y')
			{
				c.removeObject("WaterBottle");
				c.setHasWaterBottle(false);
			}
			else if (decision=='n')
			{
				c.loseLive(1);
			}
		}
		else
			c.loseLive(1);
	}
	if(this->areaName == "Crypt"){
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
		int totalRoll = diceRoll1 + diceRoll2 + diceRoll3 - c.getStrength();
		cout<<"Your total roll comes out to a "<<totalRoll<<" ... ";

		return;
	}
	if(this->areaName == "Crags"){
		int diceRoll;
		cout<<"Press an key to roll the die."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";

		switch(diceRoll)
		{
			case(1):{cout<<"you are attacked by a Spirit!"<<endl;
				Enemy *spirit = new Enemy("Spirit", "a spirit from the Crags.","Spirit",5,4,0);		
				c.battleMonster(*spirit);
				break;}
			case(2):cout<<"you loose one turn!"<<endl;
				c.setIdleTurns(1);
				break;
			case(3):cout<<"you loose one turn!"<<endl;
				c.setIdleTurns(1);
				break;
			case(4):cout<<"nothing happened."<<endl;
				break;
			case(5):cout<<"nothing happened."<<endl;
				break;
			case(6):cout<<"a Barbarian came to your aid, you gained one strength!"<<endl;
				c.gainStrength(1);
				break;
			}
		c.printStats();
		return;
	}
	if(this->areaName == "City"){
		char decision;
		cout<<"Who would you like to visit: the Enchantress, Doctor or Alchemist?(e/d/a)"<<endl;
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
					c.loseStrength(1);
					break;
			case(3):cout<<"you loose one craft!"<<endl;
					c.loseCraft(1);
					break;
			case(4):cout<<"you gained one craft!"<<endl;
					c.gainCraft(1);
					break;
			case(5):cout<<"you gained one strength!"<<endl;
					c.gainStrength(1);
					break;
			case(6):cout<<"you gained a spell!"<<endl;
						if(c.hasRoomForSpells()){
							Card temp = spellCards->draw();
							c.addSpell(temp);cout<<"You learned a spell!"<<endl<<endl;
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
				c.gainLive(1);
				c.loseGold(1);
			}
			else if(decision=='n')
				return;

			cout<<"Would you like to gain another life at the cost of 1 more gold?(y/n)"<<endl;
			cin>>decision;

			if(decision=='y')
			{	
				c.gainLive(1);
				c.loseGold(1);
			}
			else if(decision=='n')
				return;
		}
		else if(decision=='a')
		{
			cout<<"Witch item would you like to turn to gold?(enter name)"<<endl;
			c.showBag();
			string item;
			cin>>item;
			c.removeObject(item);
			c.gainGold(1);
		}


		c.printStats();
		return;
	}
	if(this->areaName == "Chasm"){
		int diceRoll;
		cout<<"Press an key to roll the die for yourselve."<<endl;
		srand((unsigned int)time(0));
		diceRoll = ((int) rand() % 6 + 1);
		cout<<"You rolled a "<<diceRoll<<" ...";
		if(diceRoll==1 || diceRoll==2)
		{
			cout<<"you lose a life!"<<endl;
			c.loseLive(1);
		}
		else
		{
			cout<<"noting happened."<<endl;
		}
	
		for(int i=0;i<c.getNumFollowers();i++)
		{
			cout<<"Press an key to roll the die for your follower."<<endl;
			srand((unsigned int)time(0));
			diceRoll = ((int) rand() % 6 + 1);
			cout<<"You rolled a "<<diceRoll<<" ...";
			if(diceRoll==1 || diceRoll==2)
			{
				cout<<c.showFollower(i)<<" died!"<<endl;
				c.removeFollower(i);
			}
			else
			{
				cout<<"noting happened."<<endl;
			}
	
		}

		c.printStats();
		return;
	}
	if(this->areaName == "Chapel"){
		if(c.getAlignment()=="Evil")
		{
			cout<<"You are Evil, so you will lose a life."<<endl;
			c.loseLive(1);
		}
		else if(c.getAlignment()=="Neutral")
		{
			while(true)
			{
				char decision;
				cout<<"Would you like to heal yourself at the cost of 1 gold?(y/n)"<<endl;
				cin>>decision;

				if(decision=='y')
				{	
					c.replenishLives(0);
					c.printStats();
					return;
				}
				else if(decision=='n')
					return;
			}			
		}
		else if(c.getAlignment()=="Good")
		{
			char decision;
			cout<<"Would you like to heal yourself for free or Pray?(h/p)"<<endl;
			cin>>decision;

			if(decision=='h')
			{	
				c.replenishLives(0);
			}
			else if(decision=='p')
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
				case(4):cout<<"nothing happened."<<endl;
						break;
				case(5):cout<<"you gained a life!"<<endl;
						c.gainLive(1);
						break;
				case(6):cout<<"you gained a spell!"<<endl;						
						if(c.hasRoomForSpells()){
							Card temp = spellCards->draw();
							c.addSpell(temp);cout<<"You learned a spell!"<<endl<<endl;
						}
						else
							cout << "No more room for spells!" << endl;
						break;
				}
			}
		}
	
		c.printStats();
		return;
	}
	if(this->areaName == "Castle"){
		char decision;
		cout<<"Would you like to heal yourself at the cost of 1 gold?(y/n)"<<endl;
		cin>>decision;

		if(decision=='y')
		{	
			c.replenishLives(0);
			if (c.hasThisFollower("Prince")||c.hasThisFollower("Princess"))
				c.replenishLives(2);
			c.loseGold(1);
		}
		else if(decision=='n')
			return;

		c.printStats();
		return;
	}
	if(this->areaName == "Black Knight"){
		char decision;
		cout<<"Would you like to give up a gold or lose a life?(g/l)"<<endl;
		cin>>decision;

		if(decision=='g')
			c.loseGold(1);
		else if(decision=='l')
			c.loseLive(1);

		c.printStats();
		return;
	}
}
