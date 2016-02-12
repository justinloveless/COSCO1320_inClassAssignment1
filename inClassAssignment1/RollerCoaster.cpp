#include<iostream>
#include<string>
#include "TeenageRide.h" //inherets info from the parent file
#include "RollerCoaster.h" //gets information from the header file
using namespace std;

RollerCoaster::RollerCoaster() :TeenageRide() //default constructor 
{

}
RollerCoaster::RollerCoaster(string nameOfRide, int minHeight): TeenageRide(nameOfRide, minHeight)
{

}
void RollerCoaster::showInfo() const //prints ride information
{
	cout << "Rollercoaster Ride Type\n" << endl;
	cout << "  Name:" << getRideName() << endl; //finds ride names associated with the rollercoaster
	cout << "  Info: 10 min of twists, turns and drops." << endl;
	restrictions(); //displays the restrictions placed on the rides 
}
