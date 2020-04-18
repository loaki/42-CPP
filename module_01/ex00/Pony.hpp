#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <string>

class Pony
{
private:
	std::string	const name;
	int	age;
public:
	Pony(std::string const name, int age);

	void call_name(void);
	void call_age(void);
};

#endif
