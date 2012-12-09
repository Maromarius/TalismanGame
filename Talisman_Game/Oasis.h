#ifndef OASIS_H
#define OASIS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Oasis: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Oasis(int);
    ~Oasis();
};

#endif