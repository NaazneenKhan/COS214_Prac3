#include "Legion.h"

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


void Legion::attack()
{
    for (auto unit : units) {
		unit->attack();
	}
}

void Legion::add(LegionUnit* component) {
	units.push_back(component);
}

void Legion::remove(LegionUnit* component) {
	units.erase(std::remove(units.begin(), units.end(), component), units.end());

}
