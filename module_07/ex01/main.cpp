#include "iter.hpp"
#include <iostream>

template<typename T>
void print(const T& var) {
	std::cout << var << " | ";
}

template<typename T>
void increment(const T& var) {
	++(const_cast<T&>(var));
}

int main() {
	int arrInt[6] = {-2, -1, 0, 1, 2, 42};
	std::string arrString[3] = {"Pierre", "Paul", "Jack"};

	std::cout << "=== int array ===" << std::endl;
	::iter(arrInt, 6, &print);

	std::cout << "\n\n=== incremented int array ===" << std::endl;
	::iter(arrInt, 6, &increment);
	::iter(arrInt, 6, &print);

	std::cout << "\n\n=== string array ===" << std::endl;
	::iter(arrString, 3, &print);
	std::cout << std::endl;

	return 0;
}
