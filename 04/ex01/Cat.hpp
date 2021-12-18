//
// Created by Felipe Cody on 12/9/21.
//

#ifndef CAT_HPP
#define CAT_HPP
#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <iomanip>

class Cat : public Animal{
private:
	Brain*	_brain;
public:
	Cat();
	Cat(Cat const & cat);
	~Cat();
	Cat& operator=(const Cat& right);
	virtual void makeSound() const;
	virtual Brain *getBrain() const;
};

#endif
