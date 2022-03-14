#ifndef INTERN_HPP_
# define INTERN_HPP_

# include "Form.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# include <string>

class Intern {
	public:
		Intern();
		Intern(const Intern& other);
		~Intern();

		Intern& operator=(const Intern& other);

		Form* makeForm(std::string name, std::string target);
};

#endif
