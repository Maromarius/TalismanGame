#ifndef MINISTREL_H
#define MINISTREL_H
#include <string>
#include "Character.h"

using namespace std;
 
class Ministrel : public Character
{


protected:
	
    static const int BASE_STRENGTH = 2;
    static const int BASE_CRAFT = 4;
    static const int BASE_FATE = 5;
	static const int BASE_LIVES = 4;
    static const int NUM_OF_SPELLS = 1;

    static const string LOCATION;
    static const string ALIGNMENT;
	static const string PROFESSION;

public:
    Ministrel();
    ~Ministrel();
};

#endif
