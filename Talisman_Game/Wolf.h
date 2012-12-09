#ifndef WOLF_H
#define WOLF_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Wolf : public Enemy
{


protected:
	
    static const int STRENGTH = 2;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Wolf();
    ~Wolf();
};

#endif
