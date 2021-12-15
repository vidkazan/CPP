//
// Created by Felipe Cody on 12/9/21.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H
#include <iostream>
#include <cmath>

class Fixed{
	private:
		int 	_val;
		const static int fractionalBits = 8;
	public:
				Fixed();
				Fixed(const Fixed& fixed);
				Fixed(int const integer);
				Fixed(float floating);
				~Fixed();
				Fixed&	operator=(const Fixed& right);
		float	toFloat( void ) const;
		int		toInt( void ) const;
		int		getRawBits() const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif
