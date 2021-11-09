/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:48:20 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/09 15:19:43 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->_Weapon = &weapon;
	return ;
}

void HumanB::attack(void) const
{
	std::cout << _name << " attacks with his " << _Weapon->getType() << std::endl;
	return ;
}