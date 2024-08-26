#ifndef RIVERBANKFACTORY_H
#define RIVERBANKFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"

class RiverbankFactory : public LegionFactory {


public:
	Cavalry* createCavalry();

	Infantry* createInfantry();

	Artillery* createArtillery();
};

#endif
