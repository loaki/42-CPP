#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main() {
	Bureaucrat* b150 = new Bureaucrat("b150", 150);
	Bureaucrat* b140 = new Bureaucrat("b140", 140);
	Bureaucrat* b100 = new Bureaucrat("b100", 100);
	Bureaucrat* b1 = new Bureaucrat("b1", 1);

	std::cout << std::endl;

	std::cout << *b150 << std::endl;
	std::cout << *b140 << std::endl;
	std::cout << *b100 << std::endl;
	std::cout << *b1 << std::endl;

	std::cout << std::endl;

	ShrubberyCreationForm *shrubbery = new ShrubberyCreationForm("Shrubbery");
	RobotomyRequestForm *robotomy = new RobotomyRequestForm("Robotomy");
	PresidentialPardonForm *presidential = new PresidentialPardonForm("Presidential");

	std::cout << std::endl;

	std::cout << *shrubbery << std::endl;
	std::cout << *robotomy << std::endl;
	std::cout << *presidential << std::endl;

	std::cout << std::endl;

	// ShrubberyCreationForm
	try { // try to execute before sign
		b100->executeForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // try to sign with low level
		b150->signForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // sign
		b140->signForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << *shrubbery << std::endl; // display update info
	try { // try to execute with low level
		b140->executeForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b100->executeForm(*shrubbery);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// RobotomyRequestForm (execute main multiple times to check randomizer is working)
	try { // sign
		b1->signForm(*robotomy);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b1->executeForm(*robotomy);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	// PresidentialPardonForm
	try { // sign
		b1->signForm(*presidential);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	try { // execute
		b1->executeForm(*presidential);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete shrubbery;
	delete robotomy;
	delete presidential;

	std::cout << std::endl;

	delete b150;
	delete b140;
	delete b100;
	delete b1;

	return 0;
}
