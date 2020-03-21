#include "dir.hpp"

void	dir::start()
{
	std::cout << "My Awesome PhoneBook" << std::endl;
	this->nb_contact = 0;
}

void	dir::add()
{
	if (this->nb_contact == 8)
		std::cout << "the directory is full" << std::endl;
//	else if (this->contact[this->nb_conatct].add(this->nb_contact + 1)
		this->nb_contact++;
	std::cout << ">";
}

void	dir::preview()
{
	std::cout << "     index| firstname|  lastname|    pseudo" << std::endl;
//	for (int i = 0; i < this->nb_conatct; i++)
//		this->conatct[i].preview();
}

void	dir::search()
{
	int i;

	if (this->nb_contact == 0)
	{
		std::cout << "no contact yet" << std::endl;
		std::cout << ">";
		return ;
	}
	this->preview();
	std::cout << "type your contact's id or 0 to exit" << std::endl;
	std::cout << ">";
	std::cin >> i;
	while (i > this->nb_contact || i < 0)
	{
		std::cout << "invalid id" << std::endl;
		std::cout << ">";
		std::cin >> i;
	}
//	conatct[i-1].display
}
