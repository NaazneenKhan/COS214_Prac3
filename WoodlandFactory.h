#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H
#include "LegionFactory.h"
#include "LegionUnit.h"
#include "WoodlandInfantry.h"
#include "WoodlandCavalry.h"
#include "WoodlandArtillery.h"

class WoodlandFactory : public LegionFactory {


public:
	Cavalry* createCavalry();

	Infantry* createInfantry();

	Artillery* createArtillery();

	Artillery* deployArtillery();
};

#endif
