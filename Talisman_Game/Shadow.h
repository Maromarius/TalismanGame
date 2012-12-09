#ifndef SHADOW_H
#define SHADOW_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Shadow : public Enemy
{


protected:
	
    static const int STRENGTH = 0;
    static const int CRAFT = 2;
	static const int ENCOUNTER_NUMBER = 3;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Shadow();
    ~Shadow();
};

#endif
