#include "WoodlandCavalry.h"
#include <iostream>

void WoodlandCavalry::move() {
	std::cout << "Woodland Cavalry navigates through the dense forest with agility, using the terrain to stay hidden and move strategically." << std::endl;
}

void WoodlandCavalry::attack(int legionSize) {
	std::cout << "Woodland Cavalry charges from concealed positions in the forest, utilizing surprise and speed for effective attacks." << std::endl;
    
	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < i + 1; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
