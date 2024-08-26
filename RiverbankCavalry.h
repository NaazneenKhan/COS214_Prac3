#ifndef RIVERBANKCAVALRY_H
#define RIVERBANKCAVALRY_H
#include "Cavalry.h"

class RiverbankCavalry : public Cavalry {


public:
	void move();

	void attack(int legionSize);
};

#endif
