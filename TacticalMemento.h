#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

class TacticalMemento {

private:
	BattleStrategy* saveStrategy;

public:
	TacticalMemento(BattleStrategy strategy);

	BattleStrategy* getSavedStrategy();
};

#endif
