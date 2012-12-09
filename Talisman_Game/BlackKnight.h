#ifndef BLACKKNIGHT_H
#define BLACKKNIGHT_H
#include <string>
#include "Area.h"


using namespace std;
 
class BlackKnight: public Area
{
protected:

public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    BlackKnight(int);
    ~BlackKnight();
};

#endif