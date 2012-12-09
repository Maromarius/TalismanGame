#ifndef PLAINOFPERIL_H
#define PLAINOFPERIL_H
#include <string>
#include "Area.h"


using namespace std;
 
class PlainOfPeril: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    PlainOfPeril(int);
    ~PlainOfPeril();
};

#endif