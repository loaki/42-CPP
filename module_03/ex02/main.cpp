#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include <iostream>

int main() {
	ScavTrap *c1 = new ScavTrap();
	FragTrap *c2 = new FragTrap("Pierre");
	FragTrap *frag = new FragTrap();
	FragTrap *c3 = new FragTrap(*frag);

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

	c1->guardGate();
	c2->highFivesGuys();
	c3->highFivesGuys();

	std::cout << std::endl;

	delete c1;
	delete c2;
	delete frag;
	delete c3;
}
