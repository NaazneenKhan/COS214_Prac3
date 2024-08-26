#ifndef LEGION_H
#define LEGION_H
#include "LegionUnit.h"
#include <vector>
using namespace std;

class Legion : public LegionUnit {

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
