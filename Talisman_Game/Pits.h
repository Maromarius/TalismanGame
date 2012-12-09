#ifndef PITS_H
#define PITS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Pits: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Pits(int);
    ~Pits();
};

#endif