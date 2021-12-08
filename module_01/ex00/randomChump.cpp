/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:54:22 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/09 15:13:30 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name)
{
	srand(time(NULL));
	static const char *randName[3] =
		{"",
		" Sparrow",
		"y Chan"};
	Zombie random(name + randName[rand() % 3]);
	random.announce();
	return ;
}