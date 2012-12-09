#ifndef APE_H
#define APE_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class Ape : public Enemy
{


protected:
	
    static const int STRENGTH = 3;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
    Ape();
    ~Ape();
};

#endif