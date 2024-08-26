#include "WoodlandFactory.h"

Cavalry* WoodlandFactory::createCavalry() {
	return new WoodlandCavalry;
}

Infantry* WoodlandFactory::createInfantry() {
	return new WoodlandInfantry;
}

Artillery* WoodlandFactory::createArtillery() {
	return new WoodlandArtillery;
}

Artillery* WoodlandFactory::deployArtillery() {
	// TODO - implement WoodlandFactory::deployArtillery
	throw "Not yet implemented";
}