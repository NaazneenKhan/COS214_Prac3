#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

class LegionUnit {


public:
	virtual void move() = 0;

	virtual void attack(int legionSize) = 0;

	void add(LegionUnit* component);

	void remove(LegionUnit* component);

	virtual ~LegionUnit() ;
};

#endif
