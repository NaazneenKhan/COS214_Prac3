#ifndef RIVERBANKARTILLERY_H
#define RIVERBANKARTILLERY_H
#include "Artillery.h"

class RiverbankArtillery : public Artillery {


public:
	void move();

	void attack(int legionSize);
};

#endif
