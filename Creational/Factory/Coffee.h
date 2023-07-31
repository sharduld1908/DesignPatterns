#pragma once
#include <string.h>

// Base Abstract Coffee class. No objects can be created.
// This base class will be used in the factory class to make coffee types
// at runtime according to the user input.
class Coffee {
protected:
	std::string coffee_type;
public:
    Coffee();
    std::string getType();
    virtual void make() = 0;
};

// Child Espresso Class. Type of coffee that the user likes.
class Espresso : public Coffee {
public:
    Espresso();
    void make();
};

// Child Cappuchino Class. Type of coffee that the user likes.
class Cappuchino : public Coffee {
public:
    Cappuchino();
    void make();
};

