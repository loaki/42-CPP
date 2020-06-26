#include "Zombie.hpp"
#include "ZombieHorde.hpp"
#include <iostream>

int main(void)
{
    ZombieHorde z1 = ZombieHorde(5);
    ZombieHorde z2 = ZombieHorde(1);
    z1.announce();
    z2.announce();
    return (0);
}