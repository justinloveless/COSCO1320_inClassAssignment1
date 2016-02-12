#ifndef ROLLERCOASTER_H
#define ROLLERCOASTER_H
#include "TeenageRide.h"

class RollerCoaster : public TeenageRide
{
public:
	RollerCoaster();
	RollerCoaster(string, int);
	virtual void showInfo() const;
};


#endif