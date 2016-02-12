#ifndef CAROUSEL_H
#define CAROUSEL_H
#include <iostream>
#include <string>
#include "ChildrenRide.h"
using namespace std;

class Carousel : public ChildrenRide {

public:
	Carousel();
	Carousel(string, int);
	virtual void showInfo() const;
};

#endif
