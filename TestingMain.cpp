#include <iostream>
#include "Army.h"
#include "LegionFactory.h"
#include "Flanking.h"
#include "Fortification.h"
#include "Ambush.h"


int main() {
    // Create a factory
    LegionFactory* factory = new ConcreteLegionFactory();

    // Create an army with user input for units
    Army* army = new Army(factory);

    army->executeStrategy();

    // Cleanup
    delete army;
    delete factory;
   
    return 0;
}