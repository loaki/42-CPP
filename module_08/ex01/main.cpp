#include "Span.hpp"
#include <iostream>
#include <exception>

int main() {
	// normal test
	try {
		Span s(5);
		s.addNumber(0);
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(10);
		s.addNumber(42);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// already full exception
	try {
		Span s(5);
		s.addNumber(0);
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(10);
		s.addNumber(42);
		s.addNumber(43);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// too small exception
	try {
		Span s(1);
		s.addNumber(2);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	try {
		Span s(0);
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	std::cout << std::endl;

	// big span
	std::vector<int> big(10000);
	for (int i = 0; i < 10000; ++i) big[i] = i;
	try {
		Span s(10000);
		s.addRange(big.begin(), big.end());
		std::cout << "shortest span: " << s.shortestSpan() << std::endl;
		std::cout << "longest span : " << s.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cerr << "EXCEPTION: " << e.what() << std::endl;
	}

	return 0;
}
