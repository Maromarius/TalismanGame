#ifndef VAMPIRESTOWER_H
#define VAMPIRESTOWER_H
#include <string>
#include "Area.h"


using namespace std;
 
class VampiresTower: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    VampiresTower(int);
    ~VampiresTower();
};

#endif