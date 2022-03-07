#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() {
	this->_name = "FragTrap";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(std::string name) {
	this->_name = name;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;

	std::cout << this->_name << " FragTrap created" << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) {
	*this = other;

	std::cout << this->_name << " FragTrap copy created" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " FragTrap destroyed" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << this->_name << " FragTrap = " << other._name << std::endl;

	return *this;
}

void FragTrap::highFivesGuys() {
	if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " has not enought Energy points" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout << this->_name << " FragTrap high fives guys!!!" << std::endl;
}