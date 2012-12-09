#ifndef RUNES_H
#define RUNES_H
#include <string>
#include "Area.h"


using namespace std;
 
class Runes: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Runes(int);
    ~Runes();
};

#endif