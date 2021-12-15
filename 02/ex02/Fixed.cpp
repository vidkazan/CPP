//
// Created by Felipe Cody on 12/9/21.
//

#include "Fixed.hpp"

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

int Fixed::toInt() const {
	return (_val >> fractionalBits);
}

float Fixed::toFloat() const {
	return (float(_val) / (1 << fractionalBits));
}

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

std::ostream& operator<<(std::ostream& o, const Fixed& rhs) {
	o << rhs.toFloat();
	return o;
}

const Fixed&	max(const Fixed& left, const Fixed& right){
	if(left.getRawBits() > right.getRawBits())
		return left;
	return right;
}

const Fixed&	min(const Fixed& left, const Fixed& right){
	if(left.getRawBits() < right.getRawBits())
		return left;
	return right;
}

int Fixed::getRawBits() const{
	return _val;
}