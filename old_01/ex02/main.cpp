/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:18:24 by jfeuilla          #+#    #+#             */
/*   Updated: 2020/06/23 19:54:30 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

#define COUNT 3

int main()
{
	ZombieEvent fast;
	ZombieEvent slow;
	Zombie *fastZombies[COUNT];
	Zombie *slowZombies[COUNT];

	fast.setZombieType("fast");
	slow.setZombieType("slow");
	for (int i = 0; i < COUNT; i++)
	{
		fastZombies[i] = fast.randomChump();
		slowZombies[i] = slow.randomChump();
	}
	for (int i = 0; i < COUNT; i++)
	{
		delete fastZombies[i];
		delete slowZombies[i];
	}
}
