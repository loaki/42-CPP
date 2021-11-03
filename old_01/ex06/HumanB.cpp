#include "HumanB.hpp"

HumanB::HumanB(std::string const &name):
	name(name), weapon(NULL)
{
}

void HumanB::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack(void)
{
	if (this->weapon)
		std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
	else
		std::cout << this->name << " can't attack because he has no Weapon !" << std::endl;
}
