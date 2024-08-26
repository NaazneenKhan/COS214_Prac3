#ifndef WARARCHIVES_H
#define WARARCHIVES_H
#include "TacticalMemento.h"
#include <map>
using namespace std;

#include <map>
#include <string>
#include "TacticalMemento.h"

class WarArchives {

private:
	std::map<std::string, TacticalMemento*> archives;

public:
	void addTacticalMemento(TacticalMemento* memento,const std::string& label);

	void removeTacticalMemento(const std::string& label);

	TacticalMemento* getTacticalMemento (const std::string& label);
};

#endif
