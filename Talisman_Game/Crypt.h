#ifndef CRYPT_H
#define CRYPT_H
#include <string>
#include "Area.h"


using namespace std;
 
class Crypt: public Area
{
public:
	
    static const string NAME ;
    static const string DESCRIPTION;

    Crypt(int);
    ~Crypt();
};

#endif