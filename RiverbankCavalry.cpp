#include "RiverbankCavalry.h"
#include <iostream>

void RiverbankCavalry::move() {
	std::cout << "Riverbank Cavalry maneuvers along the riverbank, taking advantage of the terrain for tactical positioning." << std::endl;
}

void RiverbankCavalry::attack(int legionSize) {
	std::cout << "Riverbank Cavalry launches a swift attack, utilizing the riverbank terrain for cover and surprise." << std::endl;
	
	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
