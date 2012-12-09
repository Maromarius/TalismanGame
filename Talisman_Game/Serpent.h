#ifndef SERPENT_H
#define SERPENT_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Serpent : public Enemy
{


protected:
	
    static const int STRENGTH = 4;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Serpent();
    ~Serpent();
};

#endif
