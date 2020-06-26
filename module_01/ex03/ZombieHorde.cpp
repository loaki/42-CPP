#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
	this->type = "";
}

ZombieHorde::ZombieHorde(int n)
{
    this->n = n;

   this->zombies = new Zombie[n];
    for (int i = 0; i < n; i ++)
    {
        this->zombies[i] = Zombie(this->type, this->randomChump());
    }
    return ;
}

std::string ZombieHorde::randomChump(void)
{
	Zombie *zombie;
	std::string name;
	int len = rand() % 8;

	name += rand() % 26 + 65;
	for (int i = 0; i < len; i++)
		name += rand() % 26 + 97;
	return (name);
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->n; i++)
    {
        this->zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde()
{
	delete[] this->zombies;
}