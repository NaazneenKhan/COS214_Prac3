#ifndef INFANTRY_H
#define INFANTRY_H
#include "LegionUnit.h"
#include <iostream>

class Infantry : public LegionUnit {


public:
	virtual void move() = 0;

	virtual void attack(int legionSize) = 0;

	virtual ~Infantry();

};

inline Infantry::~Infantry() {}

#endif
