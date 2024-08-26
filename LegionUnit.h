#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

class LegionUnit {


private:
	void virtual_LegionUnit();

public:
	virtual void move() = 0;

	virtual void attack() = 0;

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
