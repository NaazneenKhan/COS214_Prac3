#ifndef BATTLESTRATEGY_H
#define BATTLESTRATEGY_H

#include "TacticalMemento.h"

class BattleStrategy {

private:
	BattleStrategy* currentStrategy;

public:
    virtual ~BattleStrategy() = default;
	virtual void engage()= 0;

	TacticalMemento* createMemento();

	void restoreMemento(TacticalMemento* memento);
};

#endif
