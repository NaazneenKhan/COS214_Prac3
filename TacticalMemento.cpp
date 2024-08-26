#include "TacticalMemento.h"

TacticalMemento::TacticalMemento(BattleStrategy* strategy) {
	this->savedStrategy = strategy;
}

BattleStrategy* TacticalMemento::getSavedStrategy() const {
	return savedStrategy;
}
