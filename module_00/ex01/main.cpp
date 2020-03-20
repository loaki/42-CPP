#include "dir.hpp"

int		main()
{
	dir dir;
	std::string cmd;

	while (cmd != "EXIT")
	{
		std::cout << ">";
		std::getline(std::cin, cmd);
		if (cmd == "ADD")
			dir.add();
		else if (cmd == "SEARCH")
			dir.search();
		else if (cmd == "HELP")
			std::cout << "available commands : ADD, SEARCH, HELP, EXIT" << std::endl;
		else if (cmd != "EXIT")
			std::cout << "command not found, type HELP" << std::endl;
	}
	return (0);
}
