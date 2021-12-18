//
// Created by Felipe Cody on 12/9/21.
//

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("WrongAnimalDefaultType") {
	std::cout << "WrongAnimal " <<  " default constructor" << std::endl;
};

WrongAnimal::WrongAnimal(const std::string type) : _type(type) {
	std::cout << "WrongAnimal " << " copy constructor" << std::endl;
};

WrongAnimal::~WrongAnimal(){
	std::cout << "WrongAnimal "<< " destructor" << std::endl;
};
WrongAnimal& WrongAnimal::operator=(const WrongAnimal& right){
	_type = right._type;
	std::cout << "WrongAnimal assignation member function called" << std::endl;
	return *this;
}

std::string WrongAnimal::getType() const{
	return (_type);
}

void WrongAnimal::makeSound() const{
	std::cout << "It's WRONG! Im default animal!" << std::endl;
}