#include "Scalar.hpp"
#include <iostream>
#include <string>
#include <cstdlib>
#include <climits>

Scalar::Scalar() {}

Scalar::Scalar(const Scalar& other) { *this = other; }

Scalar& Scalar::operator=(const Scalar& other) { (void)other; return *this; }

void Scalar::convert(const std::string& literal) {
	std::string specialTypes[6] = {
		"-inff", "+inff", "nanf",
		"-inf", "+inf", "nan"
	};
	std::string toChar = "";
	int toInt = 0;
	float toFloat = 0;
	double toDouble = 0;

	//char
	if (literal.size() == 1 && std::isprint(literal[0]) && !std::isdigit(literal[0])) {
		toChar = literal[0];
		std::cout << "char: " << toChar << std::endl;
		std::cout << "int: " << static_cast<int>(toChar[0]) << std::endl;
		std::cout << "float: " << static_cast<float>(toChar[0]) << ".0f" << std::endl;
		std::cout << "double: " << static_cast<double>(toChar[0]) << ".0" << std::endl;
		return;
	}

	//int
	toInt = std::atoi(literal.c_str());

	//float / double
	if (literal[literal.length() - 1] == 'f') {
		toFloat = std::atof(literal.c_str());
		toDouble = static_cast<double>(toFloat);
	} else {
		toDouble = std::atof(literal.c_str());
		toFloat = static_cast<float>(toDouble);
	}

	for (int i = 0; i < 6; ++i) {
		if (literal == specialTypes[i]) {
			toChar = "impossible"; break;
		}
	}
	if (toInt <= 255 && toInt >= 0 && toChar == "" && std::isprint(toInt)) {
		toChar = "'";
		toChar += static_cast<char>(toInt);
		toChar += "'";
	} else if (toChar == "") {
		toChar = "Non displayable";
	}

	std::cout << "char: " << toChar << std::endl;
	if (toChar == "impossible" || toDouble > INT_MAX || toDouble < INT_MIN) {
		std::cout << "int: impossible" << std::endl;
	} else {
		std::cout << "int: " << toInt << std::endl;
	}
	if (toChar == "imposible" && toFloat == 0) {
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	} else {
		if (toChar != "impossible" && toFloat - static_cast<int>(toFloat) == 0) {
			std::cout << "float: " << toFloat << ".0f" << std::endl;
			std::cout << "double: " << toDouble << ".0" << std::endl;
		} else {
			std::cout << "float: " << toFloat << "f" << std::endl;
			std::cout << "double: " << toDouble << std::endl;
		}
	}
}
