#ifndef VILLAGE_H
#define VILLAGE_H
#include <string>
#include "Area.h"


using namespace std;
 
class Village: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Village(int);
    ~Village();
};

#endif