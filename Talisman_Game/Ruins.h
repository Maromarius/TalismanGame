#ifndef RUINS_H
#define RUINS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Ruins: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Ruins(int);
    ~Ruins();
};

#endif