#include "Karen.hpp"

void	Karen::debug()
{
	std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info()
{
	std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void	Karen::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void	Karen::error()
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

typedef void(Karen::* lev) (void);

void	Karen::complain(std::string level)
{
	std::string const message[4] = {"debug", "info", "warning", "error"};
	lev	cmd[] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == message[i])
			(this->*cmd[i])();
	}
}