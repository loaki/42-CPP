# include "Karen.hpp"

int main(int ac, char **av)
{
	Karen		karen;
	std::string	message;
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	message = "[ Probably complaining about insignificant problems ]";
	if (ac != 2)
		message = "Error : wrong argument";
	else
	{
		for (int i = 0; i < 4; i++)
		{
				if (levels[i] == av[1])
				{
					karen.complain(levels[i]);
					return (0);
				}
		}
	}
	std::cout << message << std::endl;
	return (0);
}