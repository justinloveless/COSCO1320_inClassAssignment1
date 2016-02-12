#ifndef TRAIN_H
#define TRAIN_H
#include "ChildrenRide.h"

class Train : public ChildrenRide
{
public:
	Train();
	Train(string, int);
	virtual void showInfo() const;
};

#endif