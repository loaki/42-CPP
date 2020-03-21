#include "dir.hpp"

void	dir::start()
{
	std::cout << "My Awesome PhoneBook" << std::endl;
	std::cout << "available commands : ADD, SEARCH, HELP, EXIT" << std::endl;
	std::cout << ">";
	this->nb_contact = 0;
}

void	dir::add()
{
	if (this->nb_contact == 8)
		std::cout << "the directory is full" << std::endl;
	else if (!(this->contact[this->nb_contact].add()))
		this->nb_contact++;
	else
		std::cout << "empty contact" << std::endl;
	std::cout << ">";
}

void	dir::preview()
{
	std::cout << "     index| firstname|  lastname|  nickname|" << std::endl;
	for (int i = 0; i < this->nb_contact; i++)
	{
		std::cout << std::setw(10) << i + 1 << '|';
		this->contact[i].preview();
	}
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
	std::cout << "type your contact's index or 0 to exit" << std::endl;
	std::cout << ">";
	while (!(std::cin >> i) || i > this->nb_contact || i < 0)
	{
		std::cout << "invalid id" << std::endl;
		std::cout << ">";
		std::cin.clear();
		std::cin.ignore();
	}
	if (i > 0)
		contact[i-1].display();
}
