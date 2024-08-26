#ifndef INFANTRY_H
#define INFANTRY_H
#include "LegionUnit.h"

class Infantry : public LegionUnit {


public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
