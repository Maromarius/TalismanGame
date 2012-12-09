#ifndef LEMURE_H
#define LEMURE_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Lemure : public Enemy
{


protected:
	
    static const int STRENGTH = 0;
    static const int CRAFT = 1;
	static const int ENCOUNTER_NUMBER = 3;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Lemure();
    ~Lemure();
};

#endif
