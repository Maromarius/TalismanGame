#ifndef DESERT_H
#define DESERT_H
#include <string>
#include "Area.h"


using namespace std;
 
class Desert: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Desert(int);
    ~Desert();
};

#endif