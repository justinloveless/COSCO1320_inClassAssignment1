#ifndef TRAIN_H
#define TRAIN_H
#include <string>
#include "ChildrenRide.h"

using namespace std;


class Train : public ChildrenRide
{
public:
	Train();
	Train(string, int);
	virtual void showInfo() const;
};

#endif