#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class contact
{
private:
	std::string			field_info[11];
	static std::string	field_name[11];
public:
	int		add();
	void	preview();
	void	display();
};

#endif
