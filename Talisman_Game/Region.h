#ifndef REGION_H
#define REGION_H

#include <iostream>
#include <string>
#include "Area.h"
using namespace std;


class Region
{	
public:

	Region();
	~Region();
	void addAtTail(string data);
	void addAtTail(Area*);
	void deleteArea(string data);
	Area* getArea(string data);

	bool isEmpty();

private:

	Area* head;
	Area* tail;

};
#endif