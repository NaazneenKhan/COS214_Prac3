#include "Army.h"

Army::Army()
{
}

Army::~Army()
{
	for (auto unit : legionUnits) {
		delete unit;
	}
	delete currentStrategy;
}

void Army::addLegion(LegionUnit *legion)
{
   legionUnits.push_back(legion);
}

void Army::removeLegion(LegionUnit* legion) {
	legionUnits.erase(std::remove(legionUnits.begin(), legionUnits.end(), legion), legionUnits.end());
	
}

void Army::executeStrategy() {
	if (currentStrategy) {
		currentStrategy->engage();
	}
}

void Army::setStrategy(BattleStrategy* strategy) {
	currentStrategy = strategy;
}

void Army::saveStrategy(const std::string &label)
{
	if (currentStrategy) {
		archives.addTacticalMemento(currentStrategy->createMemento(), label);
	}
}

void Army::loadStrategy(const std::string &label)
{
	TacticalMemento* memento = archives.getTacticalMemento(label);
	if (memento && currentStrategy) {
		currentStrategy->restoreMemento(memento);
	}
}

void Army::chooseBestStrategy()
{
	loadStrategy("lastSuccessfulStrategy"); // spec says based pn previous results??

    executeStrategy();  // Execute the loaded strategy
}
