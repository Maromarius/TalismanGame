#ifndef CHASM_H
#define CHASM_H
#include <string>
#include "Area.h"


using namespace std;
 
class Chasm: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Chasm(int);
    ~Chasm();
};

#endif