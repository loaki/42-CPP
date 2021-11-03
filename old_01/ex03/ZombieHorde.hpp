#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <iostream>
# include <string>
# include "Zombie.hpp"

class ZombieHorde
{
private:
	std::string	type;
    Zombie  *zombies;
    int     n;
public:
	ZombieHorde();

	ZombieHorde(int n);
    virtual     ~ZombieHorde();
	std::string	randomChump(void);
    void        announce(void);
};

#endif
