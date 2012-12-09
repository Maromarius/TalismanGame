#ifndef WRAITH_H
#define WRAITH_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Wraith : public Enemy
{


protected:
	
    static const int STRENGTH = 0;
    static const int CRAFT = 5;
	static const int ENCOUNTER_NUMBER = 3;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Wraith();
    ~Wraith();
};

#endif
