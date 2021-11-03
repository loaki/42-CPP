#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class Weapon
{
private:
	std::string type;
public:
	Weapon();
	Weapon(std::string const &type);

	void setType(std::string const &type);
	std::string const &getType(void) const;
};

#endif
