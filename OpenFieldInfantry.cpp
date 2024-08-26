#include "OpenFieldInfantry.h"
#include <iostream>
using namespace std;

void OpenFieldInfantry::move() {
	cout << "OpenField Infantry marches steadily across open fields, maintaining formation." << endl;
}

void OpenFieldInfantry::attack(int legionSize) {
	cout << "OpenField Infantry engages the enemy with disciplined formations and steady fire." << endl;
    
	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
