#include "WoodlandInfantry.h"
#include <iostream>

void WoodlandInfantry::move() {
	std::cout << "Woodland Infantry moves stealthily through the forest, using the dense vegetation for cover and tactical advantage." << std::endl;
}

void WoodlandInfantry::attack(int legionSize) {
    std::cout << "Woodland Infantry engages the enemy with precision, leveraging the forest for ambushes and defensive positions." << std::endl;
    
    for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
