#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <string>

class ClapTrap {
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap & c);
		~ClapTrap(); 
		ClapTrap operator = (const ClapTrap & c);
		

		void attack(std::string const & target);	
		void takeDamage(unsigned int amount);	
		void beRepaired(unsigned int amount);	

	protected:
		std::string _name;
		int _hitpoints;
		int _energypoints;
		int _attackdamage;
};

#endif