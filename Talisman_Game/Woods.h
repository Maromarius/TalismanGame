#ifndef WOODS_H
#define WOODS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Woods: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Woods(int);
    ~Woods();
};

#endif