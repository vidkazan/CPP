//
// Created by Felipe Cody on 12/9/21.
//

#include "Dog.hpp"

Dog::Dog() {
	this->_brain = new Brain();
	this->_type = "DogDefaultType";
	std::cout << std::setw(10) << "Dog " << &*this<<  " default constructor" << std::endl;
};

Dog::Dog(Dog const & src) {
	this->_brain = new Brain(*src.getBrain());
	this->_type = src.getType();
	std::cout << std::setw(10) << "Dog " << &*this<< " copy constructor" << std::endl;
};

Dog::~Dog(){
	delete this->_brain;
	std::cout << std::setw(10) << "Dog "<< &*this<< " destructor" << std::endl;
};
Dog& Dog::operator=(Dog const & right){
	this->_type = right._type;
	std::cout << std::setw(10) << "Dog" << &*this <<" assignation member function called" << std::endl;
	return *this;
}
void Dog::makeSound() const{
	std::cout << std::setw(10) << "RRAF!" << std::endl;
}

Brain *Dog::getBrain() const{
	return _brain;
}