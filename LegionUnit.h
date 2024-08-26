#ifndef LEGIONUNIT_H
#define LEGIONUNIT_H

class LegionUnit {


public:
	virtual ~LegionUnit() = default;


	virtual void move() = 0;

	virtual void attactk() = 0;

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
