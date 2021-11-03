#include "HumanA.hpp"

HumanA::HumanA(std::string const &name, const Weapon &weapon):
	name(name), weapon(weapon)
{
}

void HumanA::attack(void)
{
	std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}
