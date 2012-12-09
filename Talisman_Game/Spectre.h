#ifndef SPECTRE_H
#define SPECTRE_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Spectre : public Enemy
{


protected:
	
    static const int STRENGTH = 0;
    static const int CRAFT = 3;
	static const int ENCOUNTER_NUMBER = 3;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   Spectre();
    ~Spectre();
};

#endif
