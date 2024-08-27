#include "Legion.h"
#include <algorithm> 

Legion::~Legion()
{
	for (auto unit : units) {
		delete unit;
	}
}


void Legion::move()
{
    for (auto unit : units) {
		unit->move();
	}
}


void Legion::attack(int legionSize)
{
    for (auto unit : units) {
		unit->attack(legionSize);
	}
}

void Legion::add(LegionUnit* component) {
	units.push_back(component);
}

void Legion::remove(LegionUnit* component) {
	units.erase(std::remove(units.begin(), units.end(), component), units.end());

}
