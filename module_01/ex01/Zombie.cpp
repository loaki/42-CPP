/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:02:23 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/03 15:05:13 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie( void )
{
	return ;
}

Zombie::Zombie( std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie()
{
	std::cout << _name << " is dead" << std::endl;
	return ;
}

void Zombie::announce( void ) const
{
	std::cout << "<" << _name << "> BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

void Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}