/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:18:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2020/06/23 19:02:49 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#define COUNT 3;

int main()
{
	ZombieEvent lurkers;
	Zombie *lurkersZombies[COUNT];

	lurkers.setZombieType("Lurker");
	std::cout << "# Creating " << COUNT << " Lurker Zombie" << std::endl;
	for (int i = 0; i < COUNT; i++)
		lurkersZombies[i] = lurkers.randomChump();
}
