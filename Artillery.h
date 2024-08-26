#ifndef ARTILLERY_H
#define ARTILLERY_H
#include "LegionUnit.h"

class Artillery : public LegionUnit {


public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
