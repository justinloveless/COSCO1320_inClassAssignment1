#include <iostream>
#include <string>
#include "ChildrenRide.h"
#include "ParkRide.h"
using namespace std;

int ChildrenRide::numOfChildrenRides = 0;

//default constructor
ChildrenRide::ChildrenRide() : ParkRide(), maxAge(-1)
{	//increments number of children rides, and sets
	//max age to -1
	numOfChildrenRides++;
}

//parameratized constructor
ChildrenRide::ChildrenRide(string nameOfRide, int maximumAge)
	: ParkRide(nameOfRide), maxAge(maximumAge)
{	//increments number of children rides, and sets max age
	numOfChildrenRides++;
}

// start getters
int ChildrenRide::getNumOfChildrenRides()
{
	return numOfChildrenRides;
}

int ChildrenRide::getMaxAge() const
{
	return maxAge;
}
// end getters


//print function for maximum age
void ChildrenRide::restrictions() const
{
	cout << "  Rule: maximum age: " << maxAge << endl;
}
