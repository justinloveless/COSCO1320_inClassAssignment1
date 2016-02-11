#ifndef TEENAGERIDE_H
#define TEENAGERIDE_H
#include <iostream>
using namespace std;
class TeenageRide {
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
	void restrictions();
};
#endif // !TEENAGERIDE_H
