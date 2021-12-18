//
// Created by Felipe Cody on 12/9/21.
//

#include "Cat.hpp"

Cat::Cat() {
	_type = "CatDefaultType";
	std::cout << "Cat " <<  " default constructor" << std::endl;
};

Cat::Cat(Cat const & src) {
	*this = src;
	std::cout << "Cat " << " copy constructor" << std::endl;
};

Cat::~Cat(){
	std::cout << "Cat "<< " destructor" << std::endl;
};
Cat& Cat::operator=(Cat const & right){
	_type = right._type;
	std::cout << "Cat assignation member function called" << std::endl;
	return *this;
}
void Cat::makeSound() const{
	std::cout << "Cat : Need some eat. NOW!" << std::endl;
}