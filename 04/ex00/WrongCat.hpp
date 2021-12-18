//
// Created by Felipe Cody on 12/9/21.
//

#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>

class WrongCat : public WrongAnimal{
public:
	WrongCat();
	WrongCat(const std::string type);
	~WrongCat();
	WrongCat& operator=(const WrongCat& right);
	void makeSound() const;

};

#endif
