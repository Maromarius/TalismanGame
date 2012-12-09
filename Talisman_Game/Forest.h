#ifndef FOREST_H
#define FOREST_H
#include <string>
#include "Area.h"


using namespace std;
 
class Forest: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Forest(int);
    ~Forest();
};

#endif