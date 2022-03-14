#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm()
		: Form("shrubbery creation", "none", 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
		: Form("shrubbery creation", target, 145, 137) {
	std::cout << "Shrubbery Creation Form created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& other)
		: Form(other.getName(), other.getTarget(), other.getSignGrade(), other.getExecuteGrade()) {
	*this = other;
	std::cout << "Copy of Shrubbery Creation Form created" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Shrubbery Creation Form destroyed" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& other) {
	std::cout << "Shrubbery Creation Form assignment operator" << std::endl;
	if (this == &other) return *this;
	return *this;
}

void ShrubberyCreationForm::executeAction() const {
	std::ofstream out;

	out.open((this->getTarget() + "_shrubbery").c_str(), std::ofstream::in | std::ofstream::trunc);
	out <<	"            ,@@@@@@@,							\n" <<
			"    ,,,.   ,@@@@@@/@@,  .oo8888o.				\n" <<
    		",&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o				\n" <<
   			",%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'			\n"<<
   			"%&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			\n"<<
   			"%&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			\n"<<
   			"`&%\\ ` /%&'    |.|        \\ '|8'				\n"<<
    		"    |o|        | |         | |					\n"<<
    		"    |.|        | |         | |					\n"<<
			" \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	\n"<< std::endl;


			
			

}
