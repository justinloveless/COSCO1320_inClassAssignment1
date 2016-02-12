#include "Carousel.h"
#include "ChildrenRide.h"
#include <iostream>
#include <string>
using namespace std;


Carousel::Carousel() : ChildrenRide()
{}

Carousel::Carousel(string nameOfRide, int maximumAge)
	: ChildrenRide(nameOfRide, maximumAge)
{}

void Carousel::showInfo() const
{
	cout << "Carousel Type\n";
	cout << "  Name: " << getRideNames() << endl;
	cout << "  Info: 5 minutes on play horses." << endl;
	restrictions();
}
