#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"
#include "RiverbankInfantry.h"
#include "RiverbankCavalry.h"
#include "RiverbankArtillery.h"

class RiverbankFactory : public LegionFactory {


public:
	Cavalry* createCavalry();

	Infantry* createInfantry();

	Artillery* createArtillery();

	Artillery* deployArtillery();
};

#endif
