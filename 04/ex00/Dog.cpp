//
// Created by Felipe Cody on 12/9/21.
//

#include "Dog.hpp"

Dog::Dog() {
	_type = "DogDefaultType";
	std::cout << "Dog " <<  " default constructor" << std::endl;
};

Dog::Dog(Dog const & src) {
	*this = src;
	std::cout << "Dog " << " copy constructor" << std::endl;
};

Dog::~Dog(){
	std::cout << "Dog "<< " destructor" << std::endl;
};
Dog& Dog::operator=(Dog const & right){
	_type = right._type;
	std::cout << "Dog assignation member function called" << std::endl;
	return *this;
}
void Dog::makeSound() const{
	std::cout << "Dog : Doggy-Doggy RRAF!" << std::endl;
}