#include "Bureaucrat.hpp"
#include "Form.hpp"

#include <iostream>

int main() {

	Bureaucrat *pierre = new Bureaucrat("Pierre", 2);
	try {
		std::cout << "1: " << *pierre << std::endl;
		pierre->increment();
		std::cout << "2: " << *pierre << std::endl;
		pierre->increment();
		std::cout << "3: " << *pierre << std::endl;
		pierre->increment();
		std::cout << "4: " << *pierre << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete pierre;

	std::cout << std::endl;

	Bureaucrat *paul = new Bureaucrat("Paul", 10);
	try {
		std::cout << "1: " << *paul << std::endl;
		paul->increment();
		std::cout << "2: " << *paul << std::endl;
		paul->increment();
		std::cout << "3: " << *paul << std::endl;
		paul->increment();
		std::cout << "4: " << *paul << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete paul;

	std::cout << std::endl;

	Bureaucrat *jack = new Bureaucrat("Jack", 149);
	try {
		std::cout << "1: " << *jack << std::endl;
		jack->decrement();
		std::cout << "2: " << *jack << std::endl;
		jack->decrement();
		std::cout << "3: " << *jack << std::endl;
		jack->decrement();
		std::cout << "4: " << *jack << std::endl;
		jack->decrement();
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	delete jack;

	std::cout << std::endl;

	try {
		Bureaucrat low("Low", 151);
		std::cout << "?" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Bureaucrat high("High", -1);
		std::cout << "?" << std::endl;
	}
	catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << "\n=== FORM ===\n" << std::endl;

	Bureaucrat* low = new Bureaucrat("Low", 130);
	Bureaucrat* high = new Bureaucrat("High", 15);
	Form* forms = new Form("Forms", 30, 10);

	std::cout << std::endl;

	std::cout << *forms;
	std::cout << std::endl;
	try {
		low->signForm(*forms);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	try {
		high->signForm(*forms);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << *forms;

	std::cout << std::endl;

	try {
		forms->beSigned(*low);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}
	
	try {
		forms->beSigned(*high);
	} catch (std::exception& e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;

	delete low;
	delete high;
	delete forms;

	return 0;
}
