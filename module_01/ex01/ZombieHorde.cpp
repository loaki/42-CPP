/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:04:08 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/09 15:15:44 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int n, std::string name)
{
	Zombie* horde = new Zombie[n];
	
	for(int i = 0; i < n; i++)
	{
		name += 'a';
		horde[i].set_name(name);
	}
	return horde;
}