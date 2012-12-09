#ifndef DICEWITHDEATH_H
#define DICEWITHDEATH_H
#include <string>
#include "Area.h"


using namespace std;
 
class DiceWithDeath: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    DiceWithDeath(int);
    ~DiceWithDeath();
};

#endif