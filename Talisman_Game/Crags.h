#ifndef CRAGS_H
#define CRAGS_H
#include <string>
#include "Area.h"


using namespace std;
 
class Crags: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Crags(int);
    ~Crags();
};

#endif