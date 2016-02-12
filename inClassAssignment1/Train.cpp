#include <iostream>
#include <string>
#include "ChildrenRide.h"
#include "Train.h"
using namespace std;

//defalut constructor
Train::Train() : ChildrenRide()
{}

//parameratized constructor
Train::Train(string nameOfRide, int ageRequirement)
	: ChildrenRide(nameOfRide, ageRequirement)
{} // passes values to ChildrenRide class

   //print function for final information of ride
void Train::showInfo() const
{
	cout << "Train Type\n";
	cout << "  Name: " << getRideName() << endl;
	cout << "  Info: 5 min train ride." << endl;
	restrictions();
}
