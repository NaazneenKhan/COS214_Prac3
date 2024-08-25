#ifndef ARMY_H
#define ARMY_H

#include"LegionUnit.h"
#include"BattleStrategy.h"
#include"WarArchives.h"
#include <vector>

class Army {

private:
	std::vector<LegionUnit*> legionUnits;

public:
	Army();

	void addLegion(LegionUnit* legion);

	void removeLegion(LegionUnit* legion);

	void executeStrategy();

	void setStrategy(BattleStrategy* strategy);

	void operation();
};

#endif
