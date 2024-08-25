#ifndef LEGION_H
#define LEGION_H

class Legion : LegionUnit {

private:
	vector<LegionUnit*> units;

	void LegionComposite();

public:
	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit component);
};

#endif
