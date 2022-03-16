#include "Array.hpp"
#include <iostream>
#include <string>

int main() {
	Array<int> arrIntEmpty(0);
	Array<int> arrInt(5);
	Array<char> arrChar(5);
	Array<std::string> arrString(3);

	arrInt[0] = -1;
	arrInt[1] = 0;
	arrInt[2] = 1;
	arrInt[3] = 2;
	arrInt[4] = 42;

	arrChar[0] = 'a';
	arrChar[1] = 'b';
	arrChar[2] = 'c';
	arrChar[3] = 'd';
	arrChar[4] = 'e';

	arrString[0] = "Pierre";
	arrString[1] = "Paul";
	arrString[2] = "Jack";

	std::cout << "=== empty int array ===" << std::endl;
	std::cout << "size: " << arrIntEmpty.size() << std::endl;
	for (std::size_t i = 0; i < arrIntEmpty.size(); ++i) {
		std::cout << arrIntEmpty[i] << " | ";
	}

	std::cout << "\n\n=== int array ===" << std::endl;
	std::cout << "size: " << arrInt.size() << std::endl;
	for (std::size_t i = 0; i < arrInt.size(); ++i) {
		std::cout << arrInt[i] << " | ";
	}

	std::cout << "\n\n=== char array ===" << std::endl;
	std::cout << "size: " << arrChar.size() << std::endl;
	for (std::size_t i = 0; i < arrChar.size(); ++i) {
		std::cout << arrChar[i] << " | ";
	}

	std::cout << "\n\n=== string array ===" << std::endl;
	std::cout << "size: " << arrString.size() << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << " | ";
	}

	std::cout << "\n\n=== exceptions ===\n" << std::endl;

	try {
		std::cout << arrString[1] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << arrString[-1] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	try {
		std::cout << arrInt[5] << std::endl;
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << "\n=== copy string array ===\n" << std::endl;
	Array<std::string> copy(arrString);
	std::cout << "size: " << copy.size() << std::endl;
	for (std::size_t i = 0; i < copy.size(); ++i) {
		std::cout << copy[i] << " | ";
	}

	std::cout << "\n\nchange arrString[2] to \"Bob\"" << std::endl;
	arrString[2] = "Bob";

	std::cout << "\n=== string array ===\n" << std::endl;
	std::cout << "size: " << arrString.size() << std::endl;
	for (std::size_t i = 0; i < arrString.size(); ++i) {
		std::cout << arrString[i] << " | ";
	}
	std::cout << "\n\n=== copy ===\n" << std::endl;
	std::cout << "size: " << copy.size() << std::endl;
	for (std::size_t i = 0; i < copy.size(); ++i) {
		std::cout << copy[i] << " | ";
	}
	std::cout << std::endl;

	return 0;
}
