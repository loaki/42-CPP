/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:02:43 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/03 15:22:46 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie
{
public:
	Zombie( void );
	Zombie(std::string name);
	~Zombie(void);

	void announce( void ) const;
	void set_name(std::string name);

private :
	std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif