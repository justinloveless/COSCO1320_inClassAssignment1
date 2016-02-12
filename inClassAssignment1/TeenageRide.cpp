#include <iostream>
#include "TeenageRide.h"
using namespace std;

//default constructor
TeenageRide::TeenageRide() : ParkRide() {
	//only increment number of rides
	numOfTeanageRides++;
}

//parameratized constructor
TeenageRide::TeenageRide(string _name, int _minHeight) : ParkRide(_name) {
	//in addition to incrementing rides, also set the minimum height
	numOfTeanageRides++;
	minHeight = _minHeight;

}

//print function for final output, to be inherited
void TeenageRide::restrictions() const {
	cout << "Rule: minimum height: " << minHeight << endl;
}

/*
	start getters
*/
int TeenageRide::getNumOfTeenageRides() {
	return numOfTeanageRides;
}

int TeenageRide::getMinHeight() const {
	return minHeight;
}
/*
	end getters
*/