#ifndef CAROUSEL_H
#define CAROUSEL_H
#include "ParkRide.h"
#include "ChildrenRide.h"

#include <iostream>
#include <string>
using namespace std;


class Carousel : public ChildrenRide {

public:
	Carousel();
	Carousel(string, int);
	virtual void showInfo() const;
};

#endif
