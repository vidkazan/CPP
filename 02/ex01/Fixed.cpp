//
// Created by Felipe Cody on 12/9/21.
//

#include "Fixed.hpp"

Fixed::Fixed(int integer){
	std::cout << "Int constructor called" << std::endl;
	_val = integer << this->fractionalBits;
}

Fixed::Fixed(float floating){
	std::cout << "Float constructor called" << std::endl;
	_val = roundf(floating * (1 << this->fractionalBits));
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::toInt() const {
	return (_val >> fractionalBits);
}

float Fixed::toFloat() const {
	return (float(_val) / (1 << fractionalBits));
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs) {
	o << rhs.toFloat();
	return o;
}