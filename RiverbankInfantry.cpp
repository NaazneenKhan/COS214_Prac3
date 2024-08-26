#include "RiverbankInfantry.h"
#include <iostream>

void RiverbankInfantry::move() {
	std::cout << "Riverbank Infantry moves cautiously along the riverbank, leveraging the terrain for strategic positioning." << std::endl;

}

void RiverbankInfantry::attack(int legionSize) {
	std::cout << "Riverbank Infantry engages the enemy with precision, using the riverbank for cover and tactical advantage." << std::endl;
    
	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}

