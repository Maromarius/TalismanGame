#ifndef CASTLE_H
#define CASTLE_H
#include <string>
#include "Area.h"


using namespace std;
 
class Castle: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Castle(int);
    ~Castle();
};

#endif