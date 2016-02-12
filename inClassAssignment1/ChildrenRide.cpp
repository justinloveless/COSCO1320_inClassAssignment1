#include <iostream>
#include <string>
#include "ChildrenRide.h"
#include "ParkRide.h"
using namespace std;

int ChildrenRide::numOfChildrenRides = 0;

ChildrenRide::ChildrenRide() : ParkRide(), maxAge(-1)
{
	numOfChildrenRides++;
}

ChildrenRide::ChildrenRide(string nameOfRide, int maximumAge)
	: ParkRide(nameOfRide), maxAge(maximumAge)
{
	numOfChildrenRides++;
}

int ChildrenRide::getNumOfChildrenRides()
{
	return numOfChildrenRides;
}

int ChildrenRide::getMaxAge() const
{
	return maxAge;
}

void ChildrenRide::restrictions() const
{
	cout << "  Rule: maximum age: " << maxAge << endl;
}
