#include "OpenFieldFactory.h"

Cavalry* OpenFieldFactory::createCavalry() {
	return new OpenFieldCavalry;
}

Infantry* OpenFieldFactory::createInfantry() {
	return new OpenFieldInfantry;
}

Artillery* OpenFieldFactory::createArtillery() {
	return new OpenFieldArtillery;
}

Artillery* OpenFieldFactory::deployArtillery() {
	// TODO - implement OpenFieldFactory::deployArtillery
	throw "Not yet implemented";
}