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

	cout << "-----" << endl;
	cout << this->areaName << endl;
	cout << "-----" << endl;
	
	if(this->areaName == "Cursed Glade"){
		Card card;
		
		if(CursedGlade.size() == 0)
		{
			card= adventureCards->draw();
			cout << "Drawing..." << endl;
		}
		else
		{
			card = CursedGlade.back();
			cout << "Picking up..." << endl;
		}
		card.print();

		if(card.getType() == "Enemy"){
			bool wins = c.battleMonster(card);
			if(wins){
				adventureCards->discard(card);
				CursedGlade.pop_back();}
			else{
					CursedGlade.push_back(card);}
		}
		//else if(card.getType() == "Follower"){
		//	cout << "YAY";
		//}
		//if
	}
}
