#ifndef CHAPEL_H
#define CHAPEL_H
#include <string>
#include "Area.h"


using namespace std;
 
class Chapel: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Chapel(int);
    ~Chapel();
};

#endif