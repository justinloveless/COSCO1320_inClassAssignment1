#include <iostream>
#include <string>
#include "TeenageRide.h" //inherets info from the parent file
#include "Viking.h"
using namespace std;


Viking::Viking() : TeenageRide() //default constructor
{
	
}
Viking::Viking(string nameOfRide, int minHeight) :TeenageRide (nameOfRide,minHeight)
{
	
}
void Viking::showInfo() const //prints ride information
{
	cout << "Viking Ride Type" << endl;
	cout << "Name: " << getRideName() << endl; //finds the ride name associated with the viking ride
	cout << "Info: 10 min of swaying thrill. " << endl;
	restrictions(); //displays the restrictions placed on rides
}
