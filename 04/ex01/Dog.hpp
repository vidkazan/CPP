//
// Created by Felipe Cody on 12/9/21.
//

#ifndef DOG_HPP
#define DOG_HPP
#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <iomanip>

class Dog : public Animal{
private:
	Brain*	_brain;
public:
	Dog();
	Dog(Dog const & dog);
	~Dog();
	Dog& operator=(const Dog& right);
	virtual void makeSound() const;
	virtual Brain *getBrain() const;
};

#endif
