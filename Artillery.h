#ifndef ARTILLERY_H
#define ARTILLERY_H
#include "LegionUnit.h"

class Artillery : public LegionUnit {


public:
	virtual void move() =0 ;

	virtual void attack(int legionSize)=0;

	virtual ~Artillery();

};

 inline Artillery::~Artillery() {}

#endif
