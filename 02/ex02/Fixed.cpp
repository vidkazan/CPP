//
// Created by Felipe Cody on 12/9/21.
//

#include "Fixed.hpp"

// Construction~Destrucion

Fixed::Fixed() : _val(0){};

Fixed::Fixed(const Fixed& fixed){
	this->operator=(fixed);
};

Fixed::Fixed(int integer){
	_val = integer << this->fractionalBits;
}

Fixed::Fixed(float floating){
	_val = roundf(floating * (1 << this->fractionalBits));
}

Fixed::~Fixed(){
}

// Convertions

int Fixed::toInt() const {
	return (_val >> fractionalBits);
}

float Fixed::toFloat() const {
	return (float(_val) / (1 << fractionalBits));
}

// Overloads

Fixed& Fixed::operator=(const Fixed& right){
	_val = right._val;
	return *this;
}

Fixed Fixed::operator+(const Fixed& right) {
	Fixed summ;
	summ._val = (((this->_val << this->fractionalBits) + (right._val << this->fractionalBits)) >> this->fractionalBits);
	return summ;
}

Fixed Fixed::operator-(const Fixed& right) {
	Fixed summ;
	summ._val = this->_val - right._val;
	return summ;
}

Fixed Fixed::operator*(const Fixed& right) {
	Fixed summ;
	summ._val = ((this->_val * right._val) >> this->fractionalBits);
	return summ;
}

Fixed Fixed::operator/(const Fixed& right) {
	Fixed summ;
	summ._val = (this->_val << this->fractionalBits) / (right._val);

	return summ;
}

Fixed Fixed::operator++(int right) {
	Fixed old;
	old._val = this->_val;
	right = 1;
	this->_val += right;
	return old;
}

Fixed& Fixed::operator++() {
	this->_val++;
	return *this;
}

Fixed Fixed::operator--(int right) {
	Fixed old;
	old._val = this->_val;
	right = 1;
	this->_val -= right;
	return old;
}

Fixed& Fixed::operator--() {
	this->_val--;
	return *this;
}

bool Fixed::operator<(const Fixed &right) {
	if(this->_val < right._val)
		return true;
	return false;
}

bool Fixed::operator>(const Fixed &right) {
	if (this->_val > right._val)
		return true;
	return false;
}

bool Fixed::operator<=(const Fixed &right) {
	if (this->_val <= right._val)
		return true;
	return false;
}

bool Fixed::operator>=(const Fixed &right) {
	if (this->_val >= right._val)
		return true;
	return false;
}

bool Fixed::operator==(const Fixed &right) {
	if (this->_val == right._val)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &right) {
	if (this->_val != right._val)
		return true;
	return false;
}

std::ostream& operator<<(std::ostream& o, const Fixed& rhs) {
	o << rhs.toFloat();
	return o;
}

const Fixed&	Fixed::max(const Fixed& left, const Fixed& right){
	if(left._val > right._val)
		return left;
	return right;
}

const Fixed&	Fixed::min(const Fixed& left, const Fixed& right){
	if(left._val < right._val)
		return left;
	return right;
}

Fixed&	Fixed::max(Fixed& left, Fixed& right){
	if(left._val > right._val)
		return left;
	return right;
}

Fixed&	Fixed::min(Fixed& left, Fixed& right){
	if(left._val < right._val)
		return left;
	return right;
}

// Getters

int Fixed::getRawBits() const{
	return _val;
}