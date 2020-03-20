#include "dir.hpp"

void	dir::add()
{
	if (this->nb_contact == 8)
		std::cout << "the directory is full" << std::endl;
	else if (this->contact[this->nb_conatct].add(this->nb_contact + 1)
		this->nb_contact++;
}

void	dir::display()
{
	for (int i = 0; i < this->nb_conatct; i++)
		this->conatct[i].preview();
}

void	dir::search()
{
	int i;

	if (this->nb_contact == 0)
	{
		std::cout << "no contact yet" std::endl;
		return ;
	}
	this->display();
	std::cout << "type your contact's id or 0 to exit" std::endl;
	while ((std::cin >> i) < 0 || i > this->nb_contact)
		std::cout << "invalid id" std::endl;
	//conatct[i-1].display
}
