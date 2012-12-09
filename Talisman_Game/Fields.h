#ifndef FIELDS_H
#define FIELDS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Fields: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Fields(int);
    ~Fields();
};

#endif
