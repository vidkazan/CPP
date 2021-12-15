//
// Created by Felipe Cody on 12/9/21.
//

#include "Fixed.hpp"

Fixed::Fixed(): _val(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed){
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
};

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const{
	std::cout << "getRawBits member function called" << std::endl;
	return _val;
}

void Fixed::setRawBits(const int raw){
	_val = raw;
}

Fixed& Fixed::operator=(const Fixed& right){
	std::cout << "Assignation member function called" << std::endl;
	_val = right.getRawBits();
	return *this;
}
