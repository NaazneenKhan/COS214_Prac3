#include "RiverbankFactory.h"

Cavalry* RiverbankFactory::createCavalry() {
	return new RiverbankCavalry;
}

Infantry* RiverbankFactory::createInfantry() {
	return new RiverbankInfantry;
}

Artillery* RiverbankFactory::createArtillery() {
	return new RiverbankArtillery;
}

Artillery* RiverbankFactory::deployArtillery() {
	return new RiverbankArtillery;
}