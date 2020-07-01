#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <sstream>

class Sed
{
private:
public:
	Sed();

	static void replace(std::string const &filename, std::string const &search, std::string const &replace);
};

#endif
