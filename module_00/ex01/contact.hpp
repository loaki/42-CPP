#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class contact
{
private:
	std::string	field_infos[3];
	std::string	field_name[3];
public:
	void	add(int i);
	void	preview();
	void	display();
}

