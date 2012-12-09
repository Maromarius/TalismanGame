#ifndef HIDDENVALLEY_H
#define HIDDENVALLEY_H
#include <string>
#include "Area.h"


using namespace std;
 
class HiddenValley: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    HiddenValley(int);
    ~HiddenValley();
};

#endif