//
// Created by Felipe Cody on 12/9/21.
//

#include "AAnimal.hpp"

AAnimal::AAnimal() : _type("AAnimalDefaultType") {
	std::cout << std::setw(10) << "AAnimal " << &*this <<   " default constructor" << std::endl;
};

AAnimal::AAnimal(AAnimal const & src) {
	*this = src;
	std::cout<< std::setw(10) << "AAnimal " << &*this << " copy constructor" << std::endl;
};

AAnimal::~AAnimal(){
	std::cout << std::setw(10) << "AAnimal "<< &*this << " destructor" << std::endl;
};
AAnimal& AAnimal::operator=(AAnimal const & right){
	_type = right._type;
	std::cout << std::setw(10) << "AAnimal " << &*this << " assignation member function called" << std::endl;
	return *this;
}

const std::string &AAnimal::getType() const{
	return (this->_type);
}

void AAnimal::makeSound() const{}