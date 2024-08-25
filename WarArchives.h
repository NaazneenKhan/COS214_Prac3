#ifndef WARARCHIVES_H
#define WARARCHIVES_H

class WarArchives {

private:
	map<string, TacticalMemento*> archives;

public:
	void addTacticalMemento(TacticalMemento* memento, string& const_label);

	void removeTacticalMemento(string& const_label);

	void getTacticalMemento(string& const_label);
};

#endif
