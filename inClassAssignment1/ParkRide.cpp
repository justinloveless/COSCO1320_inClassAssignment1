#include <iostream>
#include "ParkRide.h"
using namespace std;

/* Constructors */
ParkRide::ParkRide() {
	numOfParkRides++; //incrememnt static int number of park rides
}

ParkRide::ParkRide(string _name) {
	rideName = _name; //set the ride name
	numOfParkRides++; //incrememnt static int number of park rides
}



/* getters */

//because function is const, the calling function can't modify rideName
string ParkRide::getRideName() const {
	return rideName; 
}

int ParkRide::getNumOfParkRides() {
	return numOfParkRides;
}
