#ifndef CITY_H
#define CITY_H
#include <string>
#include "Area.h"


using namespace std;
 
class City : public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    City(int);
    ~City();
};

#endif
