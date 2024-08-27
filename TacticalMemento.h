#ifndef TACTICALMEMENTO_H
#define TACTICALMEMENTO_H

class BattleStrategy;

class TacticalMemento {
private:
    BattleStrategy* savedStrategy;

public:
    TacticalMemento(BattleStrategy* strategy);
    BattleStrategy* getSavedStrategy() const;
};

#endif
