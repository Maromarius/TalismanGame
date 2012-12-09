#ifndef CURSEDGLADE_H
#define CURSEDGLADE_H
#include <string>
#include "Area.h"


using namespace std;
 
class CursedGlade: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    CursedGlade(int);
    ~CursedGlade();
};

#endif