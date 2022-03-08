#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << "FragTrap " << this->_name << " created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;

	std::cout << "FragTrap " << this->_name << " copy created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap " << this->_name << " destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << "FragTrap " << this->_name << " = " << other._name << std::endl;

	return *this;
}

void FragTrap::highFivesGuys() {
	if (this->_energyPoints == 0) {
		std::cout << "FragTrap " << this->_name << " has not enought Energy points" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << "FragTrap " << this->_name << " : << high fives ! >>" << std::endl;
}