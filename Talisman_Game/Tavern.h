#ifndef TARVERN_H
#define TAVERN_H
#include <string>
#include "Area.h"


using namespace std;
 
class Tavern: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Tavern(int);
    ~Tavern();
};

#endif