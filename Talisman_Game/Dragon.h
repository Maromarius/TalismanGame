#ifndef DRAGON_H
#define DRAGON_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Dragon : public Enemy
{


protected:
	
    static const int STRENGTH = 7;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Dragon();
    ~Dragon();
};

#endif
