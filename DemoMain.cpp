#include "Army.h"
#include "WoodlandFactory.h"
#include "RiverbankFactory.h"
#include "OpenFieldFactory.h"
#include <iostream>

// ANSI escape codes for text formatting
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"
#define WHITE   "\033[37m"

int main() {
    // Test creating an army with Woodland Legion Factory
    std::cout << BOLD << GREEN << "Creating Woodland Army...\n" << RESET;
    LegionFactory* woodlandFactory = new WoodlandFactory();
    Army* woodlandArmy = new Army(woodlandFactory);
    woodlandArmy->executeStrategy();

    // Test creating an army with Riverbank Legion Factory
    std::cout << BOLD << BLUE << "\nCreating Riverbank Army...\n" << RESET;
    LegionFactory* riverbankFactory = new RiverbankFactory();
    Army* riverbankArmy = new Army(riverbankFactory);
    riverbankArmy->executeStrategy();

    // Test creating an army with OpenField Legion Factory
    std::cout << BOLD << CYAN << "\nCreating OpenField Army...\n" << RESET;
    LegionFactory* openFieldFactory = new OpenFieldFactory();
    Army* openFieldArmy = new Army(openFieldFactory);
    openFieldArmy->executeStrategy();

    // Test saving a strategy
    std::cout << BOLD << YELLOW << "\nSaving current strategy for Woodland Army as 'defaultWoodlandStrategy'...\n" << RESET;
    woodlandArmy->saveStrategy("defaultWoodlandStrategy");

    // Test changing the strategy and saving it
    std::cout << BOLD << MAGENTA << "\nChanging strategy to Fortification and saving as 'fortifiedWoodlandStrategy'...\n" << RESET;
    woodlandArmy->setStrategy(new Fortification());
    woodlandArmy->saveStrategy("fortifiedWoodlandStrategy");

    // Test loading the previous strategy
    std::cout << BOLD << RED << "\nLoading 'defaultWoodlandStrategy' and executing...\n" << RESET;
    woodlandArmy->loadStrategy("defaultWoodlandStrategy");
    woodlandArmy->executeStrategy();

    // Test removing a legion unit
    std::cout << BOLD << WHITE << "\nRemoving a legion unit from Woodland Army and re-executing strategy...\n" << RESET;
    if (!woodlandArmy->getLegionUnits().empty()) {
        woodlandArmy->removeLegion(woodlandArmy->getLegionUnits().front());
    }
    woodlandArmy->executeStrategy();

    // Test choosing the best strategy based on previous results
    std::cout << BOLD << GREEN << "\nChoosing the best strategy based on previous results for Riverbank Army...\n" << RESET;
    riverbankArmy->chooseBestStrategy();

    // Clean up
    delete woodlandArmy;
    delete riverbankArmy;
    delete openFieldArmy;
    delete woodlandFactory;
    delete riverbankFactory;
    delete openFieldFactory;

    std::cout << BOLD << YELLOW << "\nThe Demo is complete.\n" << RESET;
    return 0;
}
