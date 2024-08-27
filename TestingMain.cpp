// #include "Army.h"
// #include "Legion.h"
// #include "Flanking.h"
// #include "Fortification.h"
// #include "Ambush.h"
// #include "WoodlandFactory.h"
// #include "RiverbankFactory.h"
// #include "OpenFieldFactory.h"
// #include <iostream>

// int main() {
//     // Test with WoodlandFactory
//     LegionFactory* woodlandFactory = new WoodlandFactory();
//     Army* woodlandArmy = new Army(woodlandFactory);

//     // Add dummy Legion units
//     woodlandArmy->addLegion(woodlandFactory->createInfantry());
//     woodlandArmy->addLegion(woodlandFactory->createCavalry());
//     woodlandArmy->addLegion(woodlandFactory->createArtillery());

//     // Test different strategies
//     woodlandArmy->setStrategy(new Flanking());
//     woodlandArmy->executeStrategy();

//     woodlandArmy->setStrategy(new Fortification());
//     woodlandArmy->executeStrategy();

//     woodlandArmy->setStrategy(new Ambush());
//     woodlandArmy->executeStrategy();

//     // Test save and load strategy
//     woodlandArmy->saveStrategy("AmbushStrategy");
//     woodlandArmy->loadStrategy("AmbushStrategy");
//     woodlandArmy->executeStrategy();

//     // Clean up
//     delete woodlandArmy;
//     delete woodlandFactory;

//     // Test with RiverbankFactory
//     LegionFactory* riverbankFactory = new RiverbankFactory();
//     Army* riverbankArmy = new Army(riverbankFactory);

//     // Add dummy Legion units
//     riverbankArmy->addLegion(riverbankFactory->createInfantry());
//     riverbankArmy->addLegion(riverbankFactory->createCavalry());
//     riverbankArmy->addLegion(riverbankFactory->createArtillery());

//     // Test different strategies
//     riverbankArmy->setStrategy(new Flanking());
//     riverbankArmy->executeStrategy();

//     riverbankArmy->setStrategy(new Fortification());
//     riverbankArmy->executeStrategy();

//     riverbankArmy->setStrategy(new Ambush());
//     riverbankArmy->executeStrategy();

//     // Test save and load strategy
//     riverbankArmy->saveStrategy("AmbushStrategy");
//     riverbankArmy->loadStrategy("AmbushStrategy");
//     riverbankArmy->executeStrategy();

//     // Clean up
//     delete riverbankArmy;
//     delete riverbankFactory;

//     // Test with OpenFieldFactory
//     LegionFactory* openFieldFactory = new OpenFieldFactory();
//     Army* openFieldArmy = new Army(openFieldFactory);

//     // Add dummy Legion units
//     openFieldArmy->addLegion(openFieldFactory->createInfantry());
//     openFieldArmy->addLegion(openFieldFactory->createCavalry());
//     openFieldArmy->addLegion(openFieldFactory->createArtillery());

//     // Test different strategies
//     openFieldArmy->setStrategy(new Flanking());
//     openFieldArmy->executeStrategy();

//     openFieldArmy->setStrategy(new Fortification());
//     openFieldArmy->executeStrategy();

//     openFieldArmy->setStrategy(new Ambush());
//     openFieldArmy->executeStrategy();

//     // Test save and load strategy
//     openFieldArmy->saveStrategy("AmbushStrategy");
//     openFieldArmy->loadStrategy("AmbushStrategy");
//     openFieldArmy->executeStrategy();

//     // Clean up
//     delete openFieldArmy;
//     delete openFieldFactory;

//     return 0;
// }
