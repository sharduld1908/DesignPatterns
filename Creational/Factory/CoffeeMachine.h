#pragma once

#include <iostream>
#include "Coffee.h"

enum COFFEE_TYPES {
	ESPRESSO = 1, CAPPUCHINO = 2
};

class CoffeeMachine {
public:
	CoffeeMachine();
	Coffee* MakeCoffee(int coffee_type);
};