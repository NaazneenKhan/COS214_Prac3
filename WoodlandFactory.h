#ifndef WOODLANDFACTORY_H
#define WOODLANDFACTORY_H

class WoodlandFactory : LegionFactory {


public:
	LegionUnit* createCavalry();

	LegionUnit* createInfantry();

	LegionUnit* createArtillery();
};

#endif
