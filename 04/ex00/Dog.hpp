//
// Created by Felipe Cody on 12/9/21.
//

#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>

class Dog : public Animal{
public:
	Dog();
	Dog(Dog const & dog);
	~Dog();
	Dog& operator=(const Dog& right);
	virtual void makeSound() const;
};

#endif
