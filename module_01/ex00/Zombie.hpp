/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 14:54:31 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/09 15:14:55 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <stdlib.h> 
# include <time.h>

class	Zombie
{
public:
	Zombie(std::string name);
	~Zombie(void);

	void announce(void) const;

private :
	std::string _name;
};

Zombie* newZombie(std::string name);

void randomChump(std::string name);

#endif