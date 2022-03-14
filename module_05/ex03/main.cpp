#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#include <iostream>

int main() {
	std::cout << "=== CREATE BUREAUCRATS: ===" << std::endl;
	Bureaucrat* b150 = new Bureaucrat("b150", 150);
	Bureaucrat* b140 = new Bureaucrat("b140", 140);
	Bureaucrat* b100 = new Bureaucrat("b100", 100);
	Bureaucrat* b1 = new Bureaucrat("b1", 1);

	std::cout << std::endl;

	std::cout << "=== PRINT BUREAUCRATS: ===" << std::endl;
	std::cout << *b150 << std::endl;
	std::cout << *b140 << std::endl;
	std::cout << *b100 << std::endl;
	std::cout << *b1 << std::endl;

	std::cout << std::endl;

	std::cout << "=== CREATE INTERN:=== " << std::endl;
	Intern* intern = new Intern();
	std::cout << std::endl;

	std::cout << "=== INTERN CREATES FORMS: ===" << std::endl;
	Form *shrubbery = intern->makeForm("shrubbery creation", "Shrubbery");
	std::cout << std::endl;

	Form *robotomy = intern->makeForm("robotomy request", "Robotomy");
	std::cout << std::endl;

	Form *presidential = intern->makeForm("presidential pardon", "Presidential");
	std::cout << std::endl;				

	Form *budgets = intern->makeForm("budgets", "foo");
	budgets = 0;
	std::cout << std::endl;

	std::cout << "=== DELETE INTERN: ===" << std::endl;
	delete intern;

	std::cout << std::endl;

	std::cout << "=== PRINT FORMS: ===" << std::endl;
	std::cout << *shrubbery << std::endl;
	std::cout << *robotomy << std::endl;
	std::cout << *presidential << std::endl;

	std::cout << std::endl;

	std::cout << "=== TEST SHRUBBERY CREATION: ===" << std::endl;
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

	std::cout << "=== TEST ROBOTOMY REQUEST: ===" << std::endl;
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

	std::cout << "=== TEST PRESIDENTIAL PARDON: ===" << std::endl;
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

	std::cout << "=== DELETE FORMS: ===" << std::endl;
	delete shrubbery;
	delete robotomy;
	delete presidential;

	std::cout << std::endl;

	std::cout << "=== DELETE BUREAUCRATS: ===" << std::endl;
	delete b150;
	delete b140;
	delete b100;
	delete b1;

	return 0;
}
