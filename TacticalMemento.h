#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

#include "BattleStrategy.h"

class TacticalMemento {

private:
	BattleStrategy* savedStrategy;

public:
	TacticalMemento(BattleStrategy* strategy);

	BattleStrategy* getSavedStrategy() const ;
};

#endif
