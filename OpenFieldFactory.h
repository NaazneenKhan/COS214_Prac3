#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H

class OpenFieldFactory : LegionFactory {


public:
	LegionUnit* createCavalry();

	LegionUnit* createInfantry();

	LegionUnit* createArtillery();
};

#endif
