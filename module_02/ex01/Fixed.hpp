#ifndef FIXED_HPP
# define FIXED_HPP

#include <string>

class Fixed {
	public:
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& other);
		~Fixed();

		Fixed& operator=(const Fixed& other);

		void setRawBits(const int rawBits);
		int getRawBits() const;
		int toInt() const;
		float toFloat() const;
	private:
		static const int _nFracBits = 8;
		int _rawBits;
};

std::ostream &operator<<(std::ostream &ostream, const Fixed& myClass);

#endif
