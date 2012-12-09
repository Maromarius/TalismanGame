#ifndef GHOST_H
#define GHOST_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Ghost : public Enemy
{


protected:
	
    static const int STRENGTH = 0;
    static const int CRAFT = 4;
	static const int ENCOUNTER_NUMBER = 3;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Ghost();
    ~Ghost();
};

#endif
