/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 18:02:32 by jfeuilla          #+#    #+#             */
/*   Updated: 2020/06/23 19:21:00 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
private:
	std::string type;
	std::string name;
public:
	Zombie();
	Zombie(std::string const &type, std::string const &name);
	void announce(void);
};

#endif