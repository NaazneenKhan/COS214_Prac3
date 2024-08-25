#ifndef ARMY_H
#define ARMY_H

class Army {

private:
	vector<LegionUnit*> legionUnits;

public:
	Army();

	void addLegion(LegionUnit* legion);

	void removeLegion(LegionUnit* legion);

	void executeStrategy();

	void saveStrategy(TacticalMemento* memento);

	void setStrategy(BattleStrategy* strategy);

	void operation();
};

#endif
