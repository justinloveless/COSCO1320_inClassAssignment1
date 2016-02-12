#include <iostream>
#include <string>
#include "TeenageRide.h"
#include "Viking.h"
using namespace std;

Viking::Viking() : TeenageRide()
{
	
}
Viking::Viking(string nameOfRide, int minHeight) :TeenageRide (nameOfRide,minHeight)
{

}
void Viking::showInfo() const
{
	cout << "Viking Ride Type\n" << endl;
	cout << "   Name:" << getRideName() << endl;
	cout << "   Info:10 min of swaying thrill. " << endl;
	restrictions();
}
