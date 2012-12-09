#include "Region.h"
#include "Area.h"
using namespace std;



Region::Region()
{
	this->head=NULL;
	this->tail=NULL;
}

Region::~Region()
{
	delete head;
	delete tail;
}

void Region::addAtTail(string areaName)
{
	if (this->head == NULL)
	{
		this->head = new Area(areaName);
		this->tail = this->head;
		this->head->left = this->head;
		this->head->right = this->head;		
	}
	else
	{
		Area* temp = new Area(areaName);
		
		tail->left = temp;
		head->right = temp;
		temp->left = head;
		temp->right = tail;
		tail = temp;

	}
}

void Region::addAtTail(Area* a)
{
	if (this->head == NULL)
	{
		this->head = a;
		this->tail = this->head;
		this->head->left = this->head;
		this->head->right = this->head;		
	}
	else
	{
		Area* temp = a;
		
		tail->left = temp;
		head->right = temp;
		temp->left = head;
		temp->right = tail;
		tail = temp;

	}
}


void Region::deleteArea(string queryName)
{ 
	Area* cursor = this->head;
	bool found = true;  


	while (cursor->getAreaName() != queryName)
	{
		cursor = cursor->left;
		if(cursor->getAreaName() == head->getAreaName())	//Back at start without finding data
		{	
			found = false;	
			break;
		}
	}
	if (found)
	{
		cursor->right->left = cursor->left;
		cursor->left->right = cursor->right;

		cursor->left = NULL;
		cursor->right = NULL;
		cursor = NULL;
	}


}

bool Region::isEmpty()
{
	return (this->head==NULL);
}

Area* Region::getArea(string queryName)
{
	Area* cursor = this->head;
	bool found = true;  


	while (cursor->getAreaName() != queryName)
	{
		cursor = cursor->left;
		if(cursor->getAreaName() == head->getAreaName())	//Back at start without finding data
		{	
			found = false;	
			break;
		}
	}
	if (found)
	{
		return cursor;
	}
	else
	{
	cout<<queryName<<" is not a found, please review and try again."<<endl;
	return NULL;
	}

}