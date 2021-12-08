#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):_name(name),_hitpoints(10),_energypoints(10),_attackdamage(0) {
	std::cout << "ClapTrap(name=\""<< name <<"\") called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &c):_name(c._name),_hitpoints(c._hitpoints),_energypoints(c._energypoints),_attackdamage(c._attackdamage) {
	std::cout << "ClapTrap(const ClapTrap & c) called" << std::endl;
}

ClapTrap ClapTrap::operator = (const ClapTrap &r) {
	std::cout << "ClapTrap ClapTrap::operator = (const ClapTrap & c) called" << std::endl;
	if (this == &r) {
		return *this;
	}
	(void)_energypoints;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << "~ClapTrap(std::string) called" << std::endl;
}

void ClapTrap::attack(std::string const & target) {
	std::cout <<  "ClapTrap " <<  this->_name << " attack " << target;
	std::cout << ", causing " << this->_attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((this->_hitpoints -= amount) < 0) {
		std::cout <<  "ClapTrap " <<  this->_name << " takes " << amount <<  
			" points of damage and died." << std::endl;
	} else {
		std::cout <<  "ClapTrap " <<  this->_name << " takes " << amount <<  
			" points of damage! " << this->_hitpoints << " hp left." << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount) {	
	this->_hitpoints += amount;
	std::cout <<  "ClapTrap " <<  this->_name << " healed for " << amount <<  " points! " << this->_hitpoints << " hp left." << std::endl;
}