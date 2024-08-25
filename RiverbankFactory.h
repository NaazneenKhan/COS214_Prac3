#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H

class RiverbankFactory : LegionFactory {


public:
	LegionUnit* createCavalry();

	LegionUnit* createInfantry();

	LegionUnit* createArtillery();
};

#endif
