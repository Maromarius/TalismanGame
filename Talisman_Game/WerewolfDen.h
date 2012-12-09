#ifndef WEREWOLFDEN_H
#define WEREWOLFDEN_H
#include <string>
#include "Area.h"


using namespace std;
 
class WerewolfDen: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    WerewolfDen(int);
    ~WerewolfDen();
};

#endif