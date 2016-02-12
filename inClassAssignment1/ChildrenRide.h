#ifndef CHILDRENRIDE_H
#define CHILDRENRIDE_H
#include <iostream>
#include "ParkRide.h"
using namespace std;


class ChildrenRide : public ParkRide {
private:
	static int numOfChildrenRides;
	int maxAge;
public:
	ChildrenRide();
	ChildrenRide(string, int);
	static int getNumOfChildrenRides();
	int getMaxAge() const;
	virtual void restrictions() const;
	virtual void showInfo() const = 0;

};

#endif