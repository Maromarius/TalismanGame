#ifndef PLAINS_H
#define PLAINS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Plains: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Plains(int);
    ~Plains();
};

#endif