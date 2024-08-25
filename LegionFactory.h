#ifndef LEGIONFACTORY_H
#define LEGIONFACTORY_H

class LegionFactory {


private:
	void virtual_LegionFactory();

public:
	LegionUnit* virtual_createInfantry();

	LegionUnit* virtual_createCavalry();

	LegionUnit* virtual_createArtillery();
};

#endif
