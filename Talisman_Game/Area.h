#ifndef AREA_H
#define AREA_H

#include <iostream>
#include <vector>
#include <string>
#include "AdventureCard.h"
using namespace std;

class Area
{
protected:
	string areaName;
	string areaDescription;
	vector<AdventureCard> adventurCards;
	vector<Area*> raftDestination;
	int mapAreaNumber;

public:
	Area();
	Area(string);
	Area(string,string,int);
	~Area();
	
	Area* left;
	Area* right;
	void setRaftDestination(Area*);
	void effect();
	string getAreaName();
	string getAreaDescription();
	int getAreaMapNumber();
	Area* getRight();
	Area* getLeft();
	
};
#endif