/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:10:21 by jfeuilla          #+#    #+#             */
/*   Updated: 2020/06/23 19:20:45 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie():
    type(std::string()), name(std::string())
{
}

Zombie::Zombie(std::string const &type, std::string const &name):
    type(type), name(name)
{
}

void	Zombie::advert(void)
{
	std::cout << "<" << this->name << " (" << this->type <<
		 ")> Braiiiiiiinnnssss ..." << std::endl;
}
