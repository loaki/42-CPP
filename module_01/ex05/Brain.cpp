#include "Brain.hpp"

Brain::Brain():
	neurones(1)
{
}

Brain::~Brain()
{
}

std::string Brain::identify(void) const
{
	const long adr = (long)this;

	std::stringstream ss;
	ss << "0x" << std::uppercase << std::hex << adr;
	return (ss.str());
}