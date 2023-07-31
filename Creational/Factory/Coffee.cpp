#include <iostream>
#include <cstring>
#include "Coffee.h"

Coffee::Coffee() {
    coffee_type = "";
}

std::string Coffee::getType() {
	return coffee_type;
}

Espresso::Espresso() : Coffee() {
    coffee_type = "Espresso";
}

void Espresso::make() {
    std::cout << "Making a shot of Espresso...\n";
    std::cout << "Grind the coffee beans and add hot water\n";
    std::cout << "Enjoy the Espresso\n";
}

Cappuchino::Cappuchino() : Coffee() {
    coffee_type = "Cappuchino";
}

void Cappuchino::make() {
    std::cout << "Making a Cappuchino...\n";
    std::cout << "Grind the coffee beans, add hot water and milk\n";
    std::cout << "Enjoy the Frothy Cappuchino\n";
}