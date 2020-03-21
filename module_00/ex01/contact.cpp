#include "contact.hpp"

std::string contact::field_name[11] =
{
	"first name",
	"last name",
	"nickname",
	"login",
	"postal adresse",
	"email adresse",
	"phone number",
	"birthday date",
	"favorite meal",
	"underwear color",
	"darkest secret"
};

int	contact::add()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << "enter	contact's " << this->field_name[i] << std::endl;
		std::cout << ">";
		std::getline(std::cin, this->field_info[i]);
	}
	if (this->field_info[0] == "")
		return (1);
	return (0);
}

void contact::preview()
{
	for (int i = 0; i < 3; i++)
	{
		if (this->field_info[i].length() > 10)
			std::cout << this->field_info[i].substr(0,9) << ".|";
		else
			std::cout << std::setw(10) << this->field_info[i] << '|';
	}
	std::cout << std::endl;
}

void contact::display()
{
	for (int i = 0; i < 11; i++)
	{
		std::cout << this->field_name[i] << " : ";
		std::cout << this->field_info[i] << std::endl;
	}
}
