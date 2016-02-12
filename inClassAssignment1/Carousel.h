#ifndef CAROUSEL_H
#define CAROUSEL_H
#include "ChildrenRide.h"

class Carousel : public ChildrenRide 
{
	Carousel();
	Carousel(string, int);
	virtual void showInfo() const;
}

#endif