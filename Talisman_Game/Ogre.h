#ifndef OGRE_H
#define OGRE_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Ogre : public Enemy
{


protected:
	
    static const int STRENGTH = 5;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Ogre();
    ~Ogre();
};

#endif
