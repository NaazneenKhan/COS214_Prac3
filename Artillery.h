#ifndef ARTILLERY_H
#define ARTILLERY_H

class Artillery : LegionUnit {


public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
