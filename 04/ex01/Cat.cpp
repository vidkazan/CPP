//
// Created by Felipe Cody on 12/9/21.
//

#include "Cat.hpp"

Cat::Cat() {
	this->_brain = new Brain();
	this->_type = "CatDefaultType";
	std::cout << std::setw(10) << "Cat " << &*this<<  " default constructor" << std::endl;
};

Cat::Cat(Cat const & src) {
	this->_brain = new Brain(*src.getBrain());
	this->_type = src.getType();
	std::cout << std::setw(10) << "Cat " << &*this<< " copy constructor" << std::endl;
};

Cat::~Cat(){
	delete this->_brain;
	std::cout << std::setw(10) << "Cat "<< &*this<< " destructor" << std::endl;
};
Cat& Cat::operator=(Cat const & right){
	this->_type = right._type;
	std::cout << std::setw(10) << "Cat" << &*this <<" assignation member function called" << std::endl;
	return *this;
}
void Cat::makeSound() const{
	std::cout << std::setw(10) << "Need some eat. NOW!" << std::endl;
}

Brain *Cat::getBrain() const{
	return _brain;
}