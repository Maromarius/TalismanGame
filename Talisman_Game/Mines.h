#ifndef MINES_H
#define MINES_H
#include <string>
#include "Area.h"


using namespace std;
 
class Mines: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Mines(int);
    ~Mines();
};

#endif