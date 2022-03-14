#include "Intern.hpp"

Intern::Intern() {
	std::cout << "Intern created" << std::endl;
}

Intern::Intern(const Intern& other) {
	std::cout << "Copy of Intern created" << std::endl;
	*this = other;
}

Intern::~Intern() {
	std::cout << "Intern destroyed" << std::endl;
}

Intern& Intern::operator=(const Intern& other) {
	std::cout << "Intern assignment operator" << std::endl;
	if (this == &other) return *this;
	return *this;
}

static Form*	robotomy( std::string target)
{
	return new RobotomyRequestForm(target);
}

static Form*	shrubbery( std::string target)
{
	return new ShrubberyCreationForm(target);
}

static Form*	presidential( std::string target)
{
	return new PresidentialPardonForm(target);
}

Form* Intern::makeForm(std::string name, std::string target) {
	static const int kNForms = 3;

	Form* (*form[kNForms])(std::string target) = {
		&shrubbery,
		&robotomy,
		&presidential
	};

	std::string forms[kNForms] = {
		"shrubbery creation",
		"robotomy request",
		"presidential pardon"
	};

	Form* ret = NULL;
	for (int i = 0; i < kNForms; i++) {
		if (forms[i] == name) ret = form[i](target);
	}

	if (ret != NULL) std::cout << "Intern creates form " << name << std::endl;
	else std::cout << "Intern was not able to find the form " << name << std::endl;

	return ret;
}