#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "Character.h"

using namespace std;

class Warrior : public Character
{


protected:

    static const int BASE_STRENGTH = 4;
    static const int BASE_CRAFT = 2;
    static const int BASE_FATE = 1;
	static const int BASE_LIVES = 5;
    static const int NUM_OF_SPELLS = 0;

    static const string LOCATION;
    static const string ALIGNMENT;
	static const string PROFESSION;

public:
    Warrior();
    ~Warrior();
};

#endif
