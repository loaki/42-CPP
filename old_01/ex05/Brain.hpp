#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <sstream>
# include <iomanip>
# include <string>

class Brain
{
private:
	int	neurones;
public:
	Brain();
	virtual ~Brain();

	int getNeurones(void) const;
	std::string identify(void) const;
};

#endif
