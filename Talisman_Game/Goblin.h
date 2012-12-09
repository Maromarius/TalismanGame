#ifndef GOBLIN_H
#define GOBLIN_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Goblin : public Enemy
{


protected:
	
    static const int STRENGTH = 2;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Goblin();
    ~Goblin();
};

#endif
