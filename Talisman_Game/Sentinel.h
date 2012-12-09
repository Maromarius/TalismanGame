#ifndef SENTINEL_H
#define SENTINEL_H
#include <string>
#include "Area.h"


using namespace std;
 
class Sentinel: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Sentinel(int);
    ~Sentinel();
};

#endif