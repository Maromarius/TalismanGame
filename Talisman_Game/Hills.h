#ifndef HILLS_H
#define HILLS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Hills: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Hills(int);
    ~Hills();
};

#endif