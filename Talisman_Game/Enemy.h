#ifndef ENEMY_H
#define ENEMY_H
#include <string>
#include <iostream>
#include "AdventureCard.h"


using namespace std;

class Enemy : public AdventureCard {

protected:
	string type;
	int encounterNumber;

public:
    Enemy(string,string,string,int,int,int);
    ~Enemy();
	string getName();
	string getDescription();
	int getAbility();
};

#endif
