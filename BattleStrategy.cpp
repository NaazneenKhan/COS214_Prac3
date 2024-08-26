#include "BattleStrategy.h"

TacticalMemento* BattleStrategy::createMemento() {
	return new TacticalMemento(this);
}

void BattleStrategy::restoreMemento(TacticalMemento* memento) {
	// Restore the strategy state from the memento
	this->currentStrategy = memento->getSavedStrategy();
}
