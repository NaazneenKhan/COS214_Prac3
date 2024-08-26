#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H
#include "TacticalMemento.h"

class BattleStrategy {

private:
	BattleStrategy* currentStrategy;

	void virtual_BattleStrategy();

public:
	void virtual_engage();

	TacticalMemento* createMemento();

	void restoreMemento(TacticalMemento* memento);
};

#endif
