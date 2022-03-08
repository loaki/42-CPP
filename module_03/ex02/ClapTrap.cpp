#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
	: _name("Clap")
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name)
	, _hitPoints(10)
	, _energyPoints(10)
	, _attackDamage(0) {
	std::cout << "ClapTrap " << this->_name << " created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) {
	*this = other;

	std::cout << "ClapTrap " << this->_name << " copy created" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap " << this->_name << " destroyed" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
	this->_name = other._name;
	this->_hitPoints = other._hitPoints;
	this->_energyPoints = other._energyPoints;
	this->_attackDamage = other._attackDamage;

	std::cout << "ClapTrap " << this->_name << " = " << other._name << std::endl;

	return *this;
}

void ClapTrap::attack(const std::string &target) {
	if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << " has not enought Energy points" << std::endl;
		return;
	}
	this->_energyPoints--;
	std::cout
		<< "ClapTrap " << this->_name << " attacks " << target
		<< ", causing " << this->_attackDamage << " damage!"
		<< std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	this->_hitPoints -= amount;
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_energyPoints == 0) {
		std::cout << "ClapTrap " << this->_name << "has not enought Energy points" << std::endl;
		return;
	}
	this->_energyPoints--;
	this->_hitPoints += amount;
	std::cout
		<< "ClapTrap " << this->_name << " repared " << amount
		<< " Hit points!"
		<< std::endl;
}
