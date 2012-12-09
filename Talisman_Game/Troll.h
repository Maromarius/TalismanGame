#ifndef TROLL_H
#define TROLL_H
#include <string>
#include "Character.h"

using namespace std;
 
class Troll : public Character
{


protected:
	
    static const int BASE_STRENGTH = 6;
    static const int BASE_CRAFT = 1;
    static const int BASE_FATE = 1;
	static const int BASE_LIVES = 6;
    static const int NUM_OF_SPELLS = 1;

    static const string LOCATION;
    static const string ALIGNMENT;
	static const string PROFESSION;

public:
    Troll();
    ~Troll();
};

#endif
