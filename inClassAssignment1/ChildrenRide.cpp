#include <iostream>
#include <string>
#include "ChildrenRide.h"
using namespace std;


ChildrenRide::ChildrenRide(): maxAge(-1)
{


}

ChildrenRide::ChildrenRide(string, int)
{
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
	cout << "Rule: maximum age: 7\n"
}
