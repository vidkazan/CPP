//
// Created by Felipe Cody on 12/9/21.
//

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	_type = "WrongCatDefaultType";
	std::cout << "WrongCat " <<  " default constructor" << std::endl;
};

WrongCat::WrongCat(const std::string type) {
	_type = type;
	std::cout << "WrongCat " << " copy constructor" << std::endl;
};

WrongCat::~WrongCat(){
	std::cout << "WrongCat "<< " destructor" << std::endl;
};
WrongCat& WrongCat::operator=(const WrongCat& right){
	_type = right._type;
	std::cout << "WrongCat assignation member function called" << std::endl;
	return *this;
}
void WrongCat::makeSound() const{
	std::cout << "Need to help all people in this world. NOW!!!" << std::endl;
}