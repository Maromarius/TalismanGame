#ifndef PORTALOFPOWER_H
#define PORTALOFPOWER_H
#include <string>
#include "Area.h"


using namespace std;
 
class PortalOfPower: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    PortalOfPower(int);
    ~PortalOfPower();
};

#endif