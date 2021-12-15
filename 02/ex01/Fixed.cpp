//
// Created by Felipe Cody on 12/9/21.
//

#include "Fixed.hpp"

Fixed::Fixed() : _val(0){
	std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(const Fixed& fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

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

Fixed& Fixed::operator=(const Fixed& right){
	std::cout << "Assignation member function called" << std::endl;
	_val = right.getRawBits();
	return *this;
}

int Fixed::getRawBits() const{
	return _val;
}