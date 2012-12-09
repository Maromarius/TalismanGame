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