#include "Army.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include <iostream>

int main() {
    // Test creating an army with Woodland Legion Factory
    std::cout << "Creating Woodland Army...\n";
    LegionFactory* woodlandFactory = new WoodlandFactory();
    Army* woodlandArmy = new Army(woodlandFactory);
    woodlandArmy->executeStrategy();

    // Test creating an army with Riverbank Legion Factory
    std::cout << "\nCreating Riverbank Army...\n";
    LegionFactory* riverbankFactory = new RiverbankFactory();
    Army* riverbankArmy = new Army(riverbankFactory);
    riverbankArmy->executeStrategy();

    // Test creating an army with OpenField Legion Factory
    std::cout << "\nCreating OpenField Army...\n";
    LegionFactory* openFieldFactory = new OpenFieldFactory();
    Army* openFieldArmy = new Army(openFieldFactory);
    openFieldArmy->executeStrategy();

    // Test saving a strategy
    std::cout << "\nSaving current strategy for Woodland Army as 'defaultWoodlandStrategy'...\n";
    woodlandArmy->saveStrategy("defaultWoodlandStrategy");

    // Test changing the strategy and saving it
    std::cout << "\nChanging strategy to Fortification and saving as 'fortifiedWoodlandStrategy'...\n";
    woodlandArmy->setStrategy(new Fortification());
    woodlandArmy->saveStrategy("fortifiedWoodlandStrategy");

    // Test loading the previous strategy
    std::cout << "\nLoading 'defaultWoodlandStrategy' and executing...\n";
    woodlandArmy->loadStrategy("defaultWoodlandStrategy");
    woodlandArmy->executeStrategy();

    // Test removing a legion unit
    std::cout << "\nRemoving a legion unit from Woodland Army and re-executing strategy...\n";
    if (!woodlandArmy->getLegionUnits().empty()) {
        woodlandArmy->removeLegion(woodlandArmy->getLegionUnits().front());
    }
    woodlandArmy->executeStrategy();

    // Test choosing the best strategy based on previous results
    std::cout << "\nChoosing the best strategy based on previous results for Riverbank Army...\n";
    riverbankArmy->chooseBestStrategy();

    // Clean up
    delete woodlandArmy;
    delete riverbankArmy;
    delete openFieldArmy;
    delete woodlandFactory;
    delete riverbankFactory;
    delete openFieldFactory;

    std::cout << "\nAll tests completed.\n";
    return 0;
}
