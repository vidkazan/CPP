//
// Created by Felipe Cody on 12/9/21.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H
#include <iostream>
#include <cmath>

class Fixed{
	private:
		int					_val;
		const static int	fractionalBits = 8;
	public:
				Fixed();
				Fixed(const Fixed& fixed);
				Fixed(int const integer);
				Fixed(float floating);
				~Fixed();
		Fixed&	operator=(const Fixed& right);
		Fixed	operator+(const Fixed& right);
		Fixed	operator-(const Fixed& right);
		Fixed	operator*(const Fixed& right);
		Fixed	operator/(const Fixed& right);
		bool	operator<(const Fixed& right);
		bool	operator>(const Fixed& right);
		bool	operator<=(const Fixed& right);
		bool	operator>=(const Fixed& right);
		bool	operator==(const Fixed& right);
		bool	operator!=(const Fixed& right);
		Fixed	operator++(int right);
		Fixed&	operator++();
		float	toFloat( void ) const;
		int		toInt( void ) const;
		const static Fixed&	max(const Fixed& left, const Fixed& right);
		const static Fixed&	min(const Fixed& left, const Fixed& right);
		int 	getRawBits() const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);
const Fixed&	max(const Fixed& left, const Fixed& right);
const Fixed&	min(const Fixed& left, const Fixed& right);

#endif
