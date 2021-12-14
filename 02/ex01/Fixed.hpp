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
				Fixed() : _val(0){
					std::cout << "Default constructor called" << std::endl;
				};
				Fixed(const Fixed& fixed){
					std::cout << "Copy constructor called" << std::endl;
					this->operator=(fixed);
				};
				Fixed(int const integer);
				Fixed(float floating);
				~Fixed();
				Fixed& operator=(const Fixed& right){
					std::cout << "Assignation operator called" << std::endl;
					_val = right._val;
					return *this;
				}
		float	toFloat( void ) const;
		int		toInt( void ) const;
};

std::ostream& operator<<(std::ostream& o, const Fixed& rhs);

#endif
