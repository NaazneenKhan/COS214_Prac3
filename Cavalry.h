#ifndef CAVALRY_H
#define CAVALRY_H

class Cavalry : LegionUnit {


public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
