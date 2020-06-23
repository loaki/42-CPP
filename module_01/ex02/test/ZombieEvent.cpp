/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncolomer <ncolomer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/14 18:32:55 by ncolomer          #+#    #+#             */
/*   Updated: 2020/06/23 18:43:50 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "";
}

ZombieEvent::~ZombieEvent()
{
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

	zombie = new Zombie(this->type, Zombie::randomName(10));
	zombie->announce();
	return (zombie);
}
