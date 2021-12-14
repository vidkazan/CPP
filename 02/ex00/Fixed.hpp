//
// Created by Felipe Cody on 12/9/21.
//

#ifndef EX00_FIXED_H
#define EX00_FIXED_H
#include <iostream>

class Fixed{
private:
	int _val;
	const static int fractionalBits = 8;
public:
	Fixed();
	~Fixed();
	Fixed(Fixed& fixed);
	Fixed& operator=(const Fixed& right){
		std::cout << "Assignation operator called" << std::endl;
		_val = right.getRawBits();
		return *this;
	}
	int getRawBits( void ) const;
	void setRawBits( int const raw );
};

#endif
