#ifndef AREA_H
#define AREA_H
#include <iostream>
#include <vector>
#include <string>
#include "AdventureCard.h"
#include "Enemy.h"
#include "Ape.h"
#include "Bear.h"
#include "Lion.h"
#include "Serpent.h"
#include "WildBoar.h"
#include "Wolf.h"
#include "Dragon.h"
#include "Bandit.h"
#include "Giant.h"
#include "Goblin.h"
#include "Hobgoblin.h"
#include "Ogre.h"
#include "Demon.h"
#include "Ghost.h"
#include "Lemure.h"
#include "Shadow.h"
#include "Spectre.h"
#include "Wraith.h"
#include "Character.h"
#include "Deck.h"
using namespace std;

class Area
{
protected:
	string areaName;
	string areaDescription;
	
	vector<Area*> raftDestination;
	int mapAreaNumber;

public:
	vector<Card> CursedGlade;
	vector<Card> Fields;
	vector<Card> HiddenValley;
	vector<Card> Hills;
	vector<Card> Oasis;
	vector<Card> Plains;
	vector<Card> PortalOfPower;
	vector<Card> Ruins;
	vector<Card> Runes;

	Area();
	Area(string);
	Area(string,string,int);
	~Area();
	
	Area* left;
	Area* right;
	void setRaftDestination(Area*);
	void effect(Character, Deck*, Deck*);
	string getAreaName();
	string getAreaDescription();
	int getAreaMapNumber();
	Area* getRight();
	Area* getLeft();
};
#endif