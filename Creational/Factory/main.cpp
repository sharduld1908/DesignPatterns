#include <iostream>
#include "Coffee.h"
#include "CoffeeMachine.h"

int main() {
	int choice;

	std::cout << "Select your Coffee:\n";
	std::cout << "1) Espresso\n";
	std::cout << "2) Cappuchino\n";
	std::cout << "Selection: ";
	std::cin >> choice;

	CoffeeMachine* coffee_machine = new CoffeeMachine();
	Coffee* my_coffee = coffee_machine->MakeCoffee(choice);
	
	if (my_coffee != nullptr) {
		my_coffee->make();
	}

	delete coffee_machine;
	delete my_coffee;

	return 0;
}