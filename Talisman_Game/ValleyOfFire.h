#ifndef VALLEYOFFIRE_H
#define VALLEYOFFIRE_H
#include <string>
#include "Area.h"


using namespace std;
 
class ValleyOfFire: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    ValleyOfFire(int);
    ~ValleyOfFire();
};

#endif