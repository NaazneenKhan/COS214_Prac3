#ifndef ARMY_H
#define ARMY_H
#include "LegionUnit.h"
#include "TacticalMemento.h"
#include "BattleStrategy.h"
#include <vector>
using namespace std;

class Army {

private:
	vector<LegionUnit*> legionUnits;

public:
	Army();

	void addLegion(LegionUnit* legion);

	void removeLegion(LegionUnit* legion);

	void executeStrategy();

	void saveStrategy(TacticalMemento* memento);

	void setStrategy(BattleStrategy* strategy);

	void operation();
};

#endif
