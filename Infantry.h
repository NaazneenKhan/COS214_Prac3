#ifndef INFANTRY_H
#define INFANTRY_H

class Infantry : LegionUnit {


public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
