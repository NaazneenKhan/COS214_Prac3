#ifndef CAVALRY_H
#define CAVALRY_H
#include "LegionUnit.h"

class Cavalry : public LegionUnit {


public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
