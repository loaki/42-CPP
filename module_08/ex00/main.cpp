#include "easyfind.hpp"
#include <iostream>
#include <vector>

int main() {
	std::vector<int> v;
	std::vector<int>::iterator it;

	for (int i = 0; i < 10; ++i) {
		v.push_back(i);
	}
	std::cout << "=== vector ===" << std::endl;
	for (std::vector<int>::iterator i = v.begin(); i != v.end(); ++i) {
		std::cout << *i << " | ";
	}
	std::cout << std::endl;

	std::cout << "=== easyfind -1 ===" << std::endl;
	it = easyfind(v, -1);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "iterator: " << *it << std::endl;

	std::cout << "=== easyfind 2 ===" << std::endl;
	it = easyfind(v, 2);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "iterator: " << *it << std::endl;

	std::cout << "=== easyfind 42 ===" << std::endl;
	it = easyfind(v, 42);
	if (it == v.end()) std::cout << "Not found" << std::endl;
	else std::cout << "iterator: " << *it << std::endl;

	return 0;
}
