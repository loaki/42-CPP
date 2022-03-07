#include "ClapTrap.hpp"
#include <iostream>

int main() {
	ClapTrap *c1 = new ClapTrap();
	ClapTrap *c2 = new ClapTrap("Pierre");
	ClapTrap *c3 = new ClapTrap(*c1);

	std::cout << std::endl;

	c1->attack("Paul");
	c2->attack("Jack");
	c3->attack("Jean");

	std::cout << std::endl;

	c1->takeDamage(1);
	c2->takeDamage(0);
	c2->takeDamage(42);
	c3->takeDamage(90);

	std::cout << std::endl;

	c1->beRepaired(1000);
	c2->beRepaired(1);
	c3->beRepaired(12);

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete c3;
}
