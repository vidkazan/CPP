//
// Created by Felipe Cody on 12/9/21.
//

#include "Animal.hpp"

Animal::Animal() : _type("AnimalDefaultType") {
	std::cout << "Animal " <<  " default constructor" << std::endl;
};

Animal::Animal(Animal const & src) {
	*this = src;
	std::cout << "Animal " << " copy constructor" << std::endl;
};

Animal::~Animal(){
	std::cout << "Animal "<< " destructor" << std::endl;
};
Animal& Animal::operator=(Animal const & right){
	_type = right._type;
	std::cout << "Animal assignation member function called" << std::endl;
	return *this;
}

const std::string &Animal::getType() const{
	return (this->_type);
}

void Animal::makeSound() const{}