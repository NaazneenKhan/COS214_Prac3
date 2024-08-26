#include "OpenFieldCavalry.h"
#include <iostream>
using namespace std;

void OpenFieldCavalry::move() {
	cout << "OpenField Cavalry charges across open fields with great speed." << endl;
}

void OpenFieldCavalry::attack(int legionSize) {
	cout << "OpenField Cavalry performs a swift and powerful charge against the enemy." << endl;

	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 1; ++j) {
            std::cout << "*  ";
        }
        std::cout << std::endl;
    }
}
