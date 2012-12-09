#include "Enemy.h"
#include <string>
#include <iostream>

using namespace std;

Enemy::Enemy(string name, string description,string type,int encounterNumber,int craft,int strength){

	this->NAME = name;
	this->DESCRIPTION = description;
	this->type = type;
	this->encounterNumber = encounterNumber;
	this->craft = craft;
	this->strength = strength;
}

Enemy::~Enemy(){}

string Enemy::getName(){
	return this->getName();
}

string Enemy::getDescription(){
	return this->getDescription();
}

int Enemy::getStrength(void){
	return strength;
}