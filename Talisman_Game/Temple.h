#ifndef TEMPLE_H
#define TEMPLE_H
#include <string>
#include "Area.h"


using namespace std;
 
class Temple: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Temple(int);
    ~Temple();
};

#endif