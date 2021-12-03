#include <iostream>
#include "ClapTrap.hpp" 

int main() {
	ClapTrap c("Pierre");

	ClapTrap b = c;

	b.attack("Paul");
	c.attack("Jack");
	c.beRepaired(42);
	c.takeDamage(1);
	c.takeDamage(9000);
}