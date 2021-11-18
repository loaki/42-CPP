#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class	Fixed
{
public:
	Fixed(void);
	Fixed(Fixed const & rhs);
	Fixed( int const );
	Fixed( float const );
	~Fixed(void);

	int getRawBits(void) const;
	void setRawBits(int const raw); 

	float					toFloat(void) const;
	int						toInt(void) const;
	void					compare(Fixed const & rhs, std::string f1, std::string f2) const;
	static Fixed&			min(Fixed & lhs, Fixed & rhs);
	static Fixed const &	min(Fixed const & lhs, Fixed const & rhs);
	static Fixed&			max(Fixed & lhs, Fixed & rhs);
	static Fixed const &	max(Fixed const & lhs, Fixed const & rhs);

	Fixed&	operator=( Fixed const & rhs );
	bool	operator>( Fixed const & rhs ) const;
	bool	operator<( Fixed const & rhs ) const;
	bool	operator>=( Fixed const & rhs ) const;
	bool	operator<=( Fixed const & rhs ) const;
	bool	operator==( Fixed const & rhs ) const;
	bool	operator!=( Fixed const & rhs ) const;
	Fixed	operator+( Fixed const & rhs ) const;
	Fixed	operator-( Fixed const & rhs ) const;
	Fixed	operator*( Fixed const & rhs ) const;
	Fixed	operator/( Fixed const & rhs ) const;
	Fixed&	operator++();
	Fixed	operator++(int);						
	Fixed&	operator--();						
	Fixed	operator--(int);

private :
	int _fixed;
	int _fractional_bits;
};

std::ostream &	operator<<(std::ostream & out, Fixed const & rhs);

#endif