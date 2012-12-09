#ifndef BEAR_H
#define BEAR_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Bear : public Enemy
{


protected:
	
    static const int STRENGTH = 3;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
    Bear();
    ~Bear();
};

#endif
