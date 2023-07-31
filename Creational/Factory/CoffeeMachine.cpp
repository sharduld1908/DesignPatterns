#include "CoffeeMachine.h"

CoffeeMachine::CoffeeMachine()
{
}

Coffee* CoffeeMachine::MakeCoffee(int coffee_type)
{
	switch (coffee_type)
	{
	case 1:
		return (new Espresso);
		break;
	case 2:
		return (new Cappuchino);
		break;
	default:
		std::cout << "Can't make you coffee sir!!\n";
		return nullptr;
		break;
	}
}
