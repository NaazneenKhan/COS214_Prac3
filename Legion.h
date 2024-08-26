#ifndef LEGION_H
#define LEGION_H
#include "LegionUnit.h"
#include <vector>
//using namespace std;  // sies ewwwwwww , why would you ever use this

class Legion : public LegionUnit {

private:
	std::vector<LegionUnit*> units;

public:
    ~Legion();

	void move();

	void attack();

	void add(LegionUnit* component);

	void remove(LegionUnit* component);
};

#endif
