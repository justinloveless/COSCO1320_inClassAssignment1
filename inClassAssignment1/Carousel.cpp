#include <iostream>
#include <string>
#include "Carousel.h"
#include "ChildrenRide.h"

using namespace std;

//default constructor
Carousel::Carousel() : ChildrenRide()
{}

//parameratized constructor
Carousel::Carousel(string nameOfRide, int maximumAge)
	: ChildrenRide(nameOfRide, maximumAge)
{} //passes values to ChildrenRide class


//print function for final information of ride
void Carousel::showInfo() const
{
	cout << "Carousel Type\n";
	cout << "  Name: " << getRideName() << endl;
	cout << "  Info: 5 minutes on play horses." << endl;
	restrictions();
}
