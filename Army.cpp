#include "Army.h"
#include <iostream>
#include <algorithm>
#include "Legion.h"

Army::Army(LegionFactory* factory)
{
    int infantryCount, cavalryCount, artilleryCount;
    std::cout << "Enter number of Infantry units: ";
    std::cin >> infantryCount;
    std::cout << "Enter number of Cavalry units: ";
    std::cin >> cavalryCount;
    std::cout << "Enter number of Artillery units: ";
    std::cin >> artilleryCount;

    for (int i = 0; i < infantryCount; ++i) {
        addLegion(factory->createInfantry());
    }
    for (int i = 0; i < cavalryCount; ++i) {
        addLegion(factory->createCavalry());
    }
    for (int i = 0; i < artilleryCount; ++i) {
        addLegion(factory->createArtillery());
    }

    int strategyChoice;
    std::cout << "Choose strategy:\n1. Flanking\n2. Fortification\n3. Ambush\n";
    std::cin >> strategyChoice;

    switch (strategyChoice) {
        case 1:
            setStrategy(new Flanking());
            break;
        case 2:
            setStrategy(new Fortification());
            break;
        case 3:
            setStrategy(new Ambush());
            break;
        default:
            std::cout << "Invalid choice, defaulting to Flanking.\n";
            setStrategy(new Flanking());
            break;
    }
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
    std::cout << "Executing strategy:\n";
    BattleStrategy* strategy = getStrategy();  // Assume getStrategy returns currentStrategy
    if (strategy) {
        strategy->engage();
    }
    for (auto unit : legionUnits) {
        unit->attack(legionUnits.size());  // Pass the legion size to the attack method
    }
}

void Army::setStrategy(BattleStrategy* strategy) {
    currentStrategy = strategy;
}

BattleStrategy* Army::getStrategy() const {
    return currentStrategy;
}

std::vector<LegionUnit*>& Army::getLegionUnits() {
    return legionUnits;
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
    loadStrategy("lastSuccessfulStrategy"); // Load strategy based on previous results
    executeStrategy();  // Execute the loaded strategy
}
