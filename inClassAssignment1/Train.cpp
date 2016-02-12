#include <iostream>
#include <string>
#include "ChildrenRide.h"
#include "Train.h"
#include <iostream>
using namespace std;

Train::Train() : ChildrenRide()
{}


Train::Train(string nameOfRide, int ageRequirement)
	: ChildrenRide(nameOfRide, ageRequirement)
{}

void Train::showInfo() const
{
	cout << "Train Type\n";
	cout << "  Name: " << getRideName() << endl;
	cout << "  Info: 5 min train ride." << endl;
	restrictions();
}
