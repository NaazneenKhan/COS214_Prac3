#include "WoodlandArtillery.h"
#include <iostream>

void WoodlandArtillery::move() {
	std::cout << "Woodland Artillery navigates through dense forest, carefully maneuvering to avoid obstacles." << std::endl;
}

void WoodlandArtillery::attack(int legionSize) {
	std::cout << "Woodland Artillery provides powerful fire support from concealed positions within the forest." << std::endl;

	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "*  ";
        }
        std::cout << std::endl;
    }

}
