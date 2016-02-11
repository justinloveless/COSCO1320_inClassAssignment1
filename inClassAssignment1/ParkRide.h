#ifndef PARKRIDE_H
#define PARKRIDE_H
#include <iostream>
using namespace std;
class ParkRide {
private:
	static int nuOfParkRides;
	string rideName;
public:
	ParkRide();
	ParkRide(string);
	static int getNumOfParkRides();
	string getRideNames() const;
	virtual void restrictions() const = 0;
	virtual void showInfo() const = 0;
};
#endif // !PARKRIDE_H
