#ifndef ASSASSIN_H
#define ASSASSIN_H
#include <string>
#include "Character.h"

using namespace std;
 
class Assassin : public Character
{


protected:
	
    static const int BASE_STRENGTH = 3;
    static const int BASE_CRAFT = 3;
    static const int BASE_FATE = 3;
	static const int BASE_LIVES = 4;
    static const int NUM_OF_SPELLS = 1;

    static const string LOCATION;
    static const string ALIGNMENT;
	static const string PROFESSION;

public:
    Assassin();
    ~Assassin();
};

#endif
