#ifndef WARLOCKSCAVE_H
#define WARLOCKSCAVE_H
#include <string>
#include "Area.h"


using namespace std;
 
class WarlocksCave: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    WarlocksCave(int);
    ~WarlocksCave();
};

#endif