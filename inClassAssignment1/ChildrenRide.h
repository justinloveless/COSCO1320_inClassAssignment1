#ifndef CHILDRENRIDE_H
#define CHILDRENRIDE_H
#include <iostream>
using namespace std;

class ChildrenRide : public ParkRide  {
private :
	static int numOfChildrenRides;
	int maxAge;
public :
	ChildrenRide();
	ChildrenRide(string, int);
	static int getNumOfChildrenRides();
	int getMaxAge() const; //look up what this means again
	virtual void restrictions() const;
	virtual void showInfor() const = 0;

};

#endif