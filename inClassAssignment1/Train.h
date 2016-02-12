#ifndef TRAIN_H
#define TRAIN_H
#include "ParkRide.h"
#include "ChildrenRide.h"
#include <iostream>
#include <string>
using namespace std;


class Train : public ChildrenRide
{
public:
	Train();
	Train(string, int);
	virtual void showInfo() const;
};

#endif