#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"

class OpenFieldFactory : public LegionFactory {


public:
	Cavalry* createCavalry();

	Infantry* createInfantry();

	Artillery* createArtillery();
};

#endif
