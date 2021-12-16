//
// Created by Felipe Cody on 12/9/21.
//

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed(2) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	std::cout << a;
	if(a == b)
		std::cout << " == ";
	else
		std::cout << " != ";
	std::cout << b << std::endl;
	std::cout << a;
	if(a <= b)
		std::cout << " <= ";
	else
		std::cout << " > ";
	std::cout << b << std::endl;
	return 0;
}
