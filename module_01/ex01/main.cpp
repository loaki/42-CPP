/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:04:43 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/03 15:24:43 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int nbr = 5;
	
	Zombie* horde = zombieHorde(nbr, "Zombie");
	for (int i = 0; i < nbr; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}