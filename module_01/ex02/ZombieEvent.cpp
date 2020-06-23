/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:34:22 by jfeuilla          #+#    #+#             */
/*   Updated: 2020/06/23 19:51:37 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

void ZombieEvent::setZombieType(std::string const &type)
{
	this->type = type;
}

Zombie *ZombieEvent::newZombie(std::string const &name)
{
	return (new Zombie(this->type, name));
}

Zombie *ZombieEvent::randomChump(void)
{
	Zombie *zombie;
	std::string name;
	int len = rand() % 8;

	name += rand() % 26 + 65;
	for (int i = 0; i < len; i++)
		name += rand() % 26 + 97;
	zombie = new Zombie(this->type, name);
	zombie->advert();
	return (zombie);
}
