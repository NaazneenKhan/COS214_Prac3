#include "RiverbankArtillery.h"
#include <iostream>

void RiverbankArtillery::move() {
	std::cout << "Riverbank Artillery carefully navigates along the riverbank, avoiding obstacles." << std::endl;
}

void RiverbankArtillery::attack(int legionSize) {
	std::cout << "Riverbank Artillery launches powerful shots from a position along the riverbank." << std::endl;
    
	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "*  ";
        }
        std::cout << std::endl;
    }
}
