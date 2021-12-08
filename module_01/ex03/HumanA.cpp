/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:48:27 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/09 15:26:00 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _Weapon(weapon)
{
	return ;
}

HumanA::~HumanA(void)
{
	return ;
}

void HumanA::setWeapon(Weapon &weapon)
{
	this->_Weapon = weapon;
	return ;
}

void HumanA::attack(void) const
{
	std::cout << _name << " attacks with " << _Weapon.getType() << std::endl;
	return ;
}