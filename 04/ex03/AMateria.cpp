//
// Created by Felipe Cody on 12/9/21.
//

#include "AMateria.hpp"

AMateria::AMateria() : _type("AMateriaDefaultType") {
	std::cout << std::setw(10) << "AMateria " << &*this <<   " default constructor" << std::endl;
};

AMateria::AMateria(std::string const & type) {
	this->_type = type;
	std::cout<< std::setw(10) << "AMateria " << &*this << " copy constructor" << std::endl;
};

AMateria::~AMateria(){
	std::cout << std::setw(10) << "AMateria "<< &*this << " destructor" << std::endl;
};
AMateria& AMateria::operator=(AMateria const & src){
	_type = src._type;
	std::cout << std::setw(10) << "AMateria " << &*this << " assignation member function called" << std::endl;
	return *this;
}