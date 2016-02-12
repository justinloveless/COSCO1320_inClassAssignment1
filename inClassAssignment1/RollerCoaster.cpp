#include<iostream>
#include<string>
#include "TeenageRide.h"
#include "RollerCoaster.h"
using namespace std;

RollerCoaster::RollerCoaster() :TeenageRide()
{

}
RollerCoaster::RollerCoaster(string nameOfRide, int minHeight): TeenageRide(nameOfRide, minHeight)
{

}
void RollerCoaster::showInfo() const
{
	cout << "Rollercoaster Ride Type\n" << endl;
	cout << "  Name:" << getRideName() << endl;
	cout << "  Info: 10 min of twists, turns and drops." << endl;
	restrictions();
}
