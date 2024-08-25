#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

class LegionUnit {


private:
	void virtual_LegionUnit();

public:
	void move();

	void attactk();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
