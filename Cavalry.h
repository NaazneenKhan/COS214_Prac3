#ifndef CAVALRY_H
#define CAVALRY_H
#include "LegionUnit.h"

class Cavalry : public LegionUnit {


public:
	virtual void move() =0 ;

	virtual void attack(int legionSize)=0;

	virtual ~Cavalry();

	
};

inline Cavalry::~Cavalry() {}

#endif
