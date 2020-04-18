#include "Pony.hpp"

Pony::Pony(std::string const name, int age):
	name(name), age(age)
{	
	std::cout << "constructed" << std::endl;
}

void Pony::call_name(void)
{
	std::cout << "my name is " << this->name << std::endl;
}

void Pony::call_age(void)
{
	std::cout << "I'm " << this->age << " years old" << std::endl;
}
