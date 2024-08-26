#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"

class WoodlandFactory : public LegionFactory {


public:
	Cavalry* createCavalry();

	Infantry* createInfantry();

	Artillery* createArtillery();
};

#endif
