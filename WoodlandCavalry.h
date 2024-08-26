#ifndef WOODLANDCAVALRY_H
#define WOODLANDCAVALRY_H
#include "Cavalry.h"

class WoodlandCavalry : public Cavalry {


public:
	void move();

	void attack(int legionSize);
};

#endif
