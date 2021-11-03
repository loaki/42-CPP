#ifndef HUMAN_HPP
# define HUMAN_HPP

# include <iostream>
# include <string>
# include "Brain.hpp"

class Human
{
private:
	const Brain	brain;
public:
	Human();
	virtual ~Human();

	const Brain	&getBrain(void) const;
	std::string	identify(void) const;
};

#endif