#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

#include <iostream>

int main() {
	ClapTrap *c1 = new ClapTrap();
	ScavTrap *c2 = new ScavTrap("Pierre");
	ScavTrap *scav = new ScavTrap();
	ScavTrap *c3 = new ScavTrap(*scav);

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

	c2->guardGate();
	c3->guardGate();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete scav;
	delete c3;
}
