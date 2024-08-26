#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"

class RiverbankFactory : public LegionFactory {


public:
	LegionUnit* createCavalry();

	LegionUnit* createInfantry();

	LegionUnit* createArtillery();
};

#endif
