#ifndef ARMY_H
#define ARMY_H

#include"LegionUnit.h"
#include"BattleStrategy.h"
#include "Flanking.h"       // Include the header for FlankingStrategy
#include "Fortification.h"  // Include the header for FortificationStrategy
#include "Ambush.h"  
#include"Fortification.h"
#include"Ambush.h"
#include"WarArchives.h"
#include "LegionFactory.h"
#include <vector>

class Army {

private:
	std::vector<LegionUnit*> legionUnits;
    BattleStrategy* currentStrategy;
    WarArchives archives;
public:
	Army(LegionFactory* factory);

	~Army();

	void addLegion(LegionUnit* legion);

	void removeLegion(LegionUnit* legion);

	void executeStrategy();

	void setStrategy(BattleStrategy* strategy);

	BattleStrategy* getStrategy() const;

	void saveStrategy(const std::string& label);

	void loadStrategy(const std::string& label);

	void chooseBestStrategy();
};

#endif
