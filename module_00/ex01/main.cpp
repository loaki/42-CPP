#include "dir.hpp"

int		main()
{
	dir dir;
	std::string cmd;

	dir.start();
	std::cout << ">";
	while (std::getline(std::cin, cmd) && cmd != "EXIT")
	{
		if (cmd == "ADD")
			dir.add();
		else if (cmd == "HELP")
		{
			std::cout << "available commands : ADD, SEARCH, HELP, EXIT" << std::endl;
			std::cout << ">";
		}
		else if (cmd == "SEARCH")
			dir.search();
		else  if (cmd != "EXIT" && cmd != "")
		{
			std::cout << "command not found, type HELP" << std::endl;
			std::cout << ">";
		}
		else if (cmd != "EXIT")
			std::cout << ">";
	}
	return (0);
}
