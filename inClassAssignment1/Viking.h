#ifndef VIKING_H
#define VIKING_H
#include "TeenageRide.h"

class Viking : public TeenageRide
{
public:
	Viking();
	Viking(string, int);
	virtual void showInfo() const;

};





#endif