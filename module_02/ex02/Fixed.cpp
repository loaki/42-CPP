#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed()
	: _rawBits(0) {}

Fixed::Fixed(const int value) {
	this->_rawBits = value << Fixed::_nFracBits;
}

Fixed::Fixed(const float value) {
	this->_rawBits = roundf(value *(1 << Fixed::_nFracBits));
}

Fixed::Fixed(const Fixed& other) {
	*this = other;
}

Fixed::~Fixed() {}

Fixed& Fixed::operator=(const Fixed& other) {
	if (this != &other) {
		this->_rawBits = other._rawBits; }
	return *this;
}

bool Fixed::operator>(const Fixed& other) const {
	return this->_rawBits > other._rawBits;
}

bool Fixed::operator<(const Fixed& other) const {
	return other > *this;
}

bool Fixed::operator>=(const Fixed& other) const {
	return !(other > *this);
}

bool Fixed::operator<=(const Fixed& other) const {
	return !(*this > other);
}

bool Fixed::operator==(const Fixed& other) const {
	return this->_rawBits == other._rawBits;
}

bool Fixed::operator!=(const Fixed& other) const {
	return !(this->_rawBits == other._rawBits);
}

Fixed Fixed::operator+(const Fixed& other) const {
	Fixed res;

	res._rawBits = (this->_rawBits + other._rawBits);
	return res;
}

Fixed Fixed::operator-(const Fixed& other) const {
	Fixed res;

	res._rawBits = (this->_rawBits - other._rawBits);
	return res;
}

Fixed Fixed::operator*(const Fixed& other) const {
	Fixed res(this->toFloat() * other.toFloat());
	return res;
}

Fixed Fixed::operator/(const Fixed& other) const {
	Fixed res(this->toFloat() / other.toFloat());
	return res;
}

Fixed& Fixed::operator++() {
	++(this->_rawBits);
	return (*this);
}

Fixed& Fixed::operator--() {
	--(this->_rawBits);
	return (*this);
}

Fixed Fixed::operator++(int) {
	Fixed prev(*this);

	++(this->_rawBits);
	return prev;
}

Fixed Fixed::operator--(int) {
	Fixed prev(*this);

	--(this->_rawBits);
	return prev;
}

Fixed& Fixed::min(Fixed& lhs, Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

Fixed& Fixed::max(Fixed& lhs, Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::min(const Fixed& lhs, const Fixed& rhs) {
	if (lhs < rhs) return lhs;
	return rhs;
}

const Fixed& Fixed::max(const Fixed& lhs, const Fixed& rhs) {
	if (lhs > rhs) return lhs;
	return rhs;
}

void Fixed::setRawBits(const int rawBits) {
	this->_rawBits = rawBits;
}

int Fixed::getRawBits() const {
	return this->_rawBits;
}

int Fixed::toInt() const {
	return this->_rawBits >> Fixed::_nFracBits;
}

float Fixed::toFloat() const {
	return (float)this->_rawBits / (1 << Fixed::_nFracBits);
}

std::ostream &operator<<(std::ostream &os, const Fixed& obj) {
	os << obj.toFloat();
	return os;
}
