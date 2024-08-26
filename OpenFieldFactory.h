#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"

class OpenFieldFactory : public LegionFactory {


public:
	LegionUnit* createCavalry();

	LegionUnit* createInfantry();

	LegionUnit* createArtillery();
};

#endif
