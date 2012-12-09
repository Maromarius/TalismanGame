#ifndef DWARF_H
#define DWARF_H
#include <string>
#include "Character.h"

using namespace std;
 
class Dwarf : public Character
{


protected:
	
    static const int BASE_STRENGTH = 3;
    static const int BASE_CRAFT = 3;
    static const int BASE_FATE = 5;
	static const int BASE_LIVES = 5;
    static const int NUM_OF_SPELLS = 1;

    static const string LOCATION;
    static const string ALIGNMENT;
	static const string PROFESSION;

public:
    Dwarf();
    ~Dwarf();
};

#endif
