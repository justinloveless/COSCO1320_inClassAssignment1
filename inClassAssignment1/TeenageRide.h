#ifndef TEENAGERIDE_H
#define TEENAGERIDE_H
#include <iostream>
#include "ParkRide.h"
using namespace std;
class TeenageRide : public ParkRide {
private:
	static int numOfTeanageRides;
	int minHeight;
public:
	TeenageRide();
	TeenageRide(string, int);
	static int getNumOfTeenageRides();
	int getMinHeight() const;
	virtual void restrictions() const;
	virtual void showInfo() const = 0;
};
#endif // !TEENAGERIDE_H
