#ifndef DEMON_H
#define DEMON_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Demon : public Enemy
{


protected:
	
    static const int STRENGTH = 0;
    static const int CRAFT = 10;
	static const int ENCOUNTER_NUMBER = 3;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Demon();
    ~Demon();
};

#endif
