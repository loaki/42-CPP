#ifndef	DIR_HPP
# define DIR_HPP

# include <iostream>
# include <string>
# include "contact.hpp"

class dir
{
private:
	contact	contact[8];
	int		nb_contact;
public:
	void	start();
	void	add();
	void	preview();
	void	search();
};

#endif
