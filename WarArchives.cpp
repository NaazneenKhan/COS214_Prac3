#include "WarArchives.h"

void WarArchives::addTacticalMemento(TacticalMemento* memento, const std::string& label) {
	archives[label] = memento;
}

void WarArchives::removeTacticalMemento(const std::string& label) {
	auto it = archives.find(label);
	if (it != archives.end()) {
		delete it->second;
		archives.erase(it);
	}
}

TacticalMemento *WarArchives::getTacticalMemento(const std::string &label)
{
	auto it = archives.find(label);
	if (it != archives.end()) {
		return it->second;
	}
	return nullptr;
}
