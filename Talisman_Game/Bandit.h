#ifndef BANDIT_H
#define BANDIT_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Bandit : public Enemy
{


protected:
	
    static const int STRENGTH = 4;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
    Bandit();
    ~Bandit();
};

#endif