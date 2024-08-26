#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"

class WoodlandFactory : public LegionFactory {


public:
	LegionUnit* createCavalry();

	LegionUnit* createInfantry();

	LegionUnit* createArtillery();
};

#endif
