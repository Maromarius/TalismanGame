#ifndef GRAVEYARD_H
#define GRAVEYARD_H
#include <string>
#include "Area.h"


using namespace std;
 
class Graveyard: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Graveyard(int);
    ~Graveyard();
};

#endif