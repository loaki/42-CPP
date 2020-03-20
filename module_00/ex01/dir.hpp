#ifndef	DIR_HPP
# define DIR_HPP

# include <iostream>

class dir
{
private:
	contact	contact[8];
	int		nb_contact;
public:
	dir();
	void	add();
	void	display();
	void	search();
};

#endif
