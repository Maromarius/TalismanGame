#ifndef WILDBOAR_H
#define WILDBOAR_H
#include <string>
#include "Enemy.h"

using namespace std;
 
class WildBoar : public Enemy
{


protected:
	
    static const int STRENGTH = 1;
    static const int CRAFT = 0;
	static const int ENCOUNTER_NUMBER = 2;
    static const string NAME;
    static const string TYPE;
	static const string DESCRIPTION;

public:
   WildBoar();
    ~WildBoar();
};

#endif
