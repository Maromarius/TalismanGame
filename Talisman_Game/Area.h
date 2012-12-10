#ifndef AREA_H
#define AREA_H
#include <iostream>
#include <vector>
#include <string>
#include "AdventureCard.h"
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
	vector<Card> Cards;

	Area();
	Area(string);
	Area(string,string,int);
	~Area();
	
	Area* left;
	Area* right;
	void setRaftDestination(Area*);
	virtual void effect(Character, Deck*, Deck*);
	string getAreaName();
	string getAreaDescription();
	int getAreaMapNumber();
	Area* getRight();
	Area* getLeft();
	
};
#endif