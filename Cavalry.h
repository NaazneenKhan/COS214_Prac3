#ifndef CAVALRY_H
#define CAVALRY_H
#include "LegionUnit.h"

class Cavalry : public LegionUnit {


public:
	virtual void move() =0 ;

	virtual void attack()=0;

	
};

#endif
