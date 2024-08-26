#include "OpenFieldArtillery.h"
#include <iostream>
using namespace std;

void OpenFieldArtillery::move() {
	cout << "OpenField Artillery moves across the fields." << endl;
}

void OpenFieldArtillery::attack(int legionSize) {
	cout << "OpenField Artillery fires at long range targets." << endl;
	
	for (int i = 0; i < legionSize; ++i) {
        for (int j = 0; j < 3; ++j) {
            std::cout << "*  ";
        }
        std::cout << std::endl;
    }

}
