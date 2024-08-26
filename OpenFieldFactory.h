#ifndef OPENFIELDFACTORY_H
#define OPENFIELDFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"
#include "OpenFieldInfantry.h"
#include "OpenFieldCavalry.h"
#include "OpenFieldArtillery.h"

class OpenFieldFactory : public LegionFactory {


public:
	Cavalry* createCavalry();

	Infantry* createInfantry();

	Artillery* createArtillery();

	Artillery* deployArtillery();
};

#endif
