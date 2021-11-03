/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:31:59 by jfeuilla          #+#    #+#             */
/*   Updated: 2020/06/23 19:44:15 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEVENT_HPP
# define ZOMBIEVENT_HPP

# include <iostream>
# include <string>
# include <random>
# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string	type;
public:
	ZombieEvent();

	void 		setZombieType(std::string const &type);
	Zombie		*newZombie(std::string const &name);
	Zombie		*randomChump(void);
};

#endif
