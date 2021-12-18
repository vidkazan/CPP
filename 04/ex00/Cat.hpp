//
// Created by Felipe Cody on 12/9/21.
//

#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>

class Cat : public Animal{
public:
	Cat();
	Cat(Cat const & cat);
	~Cat();
	Cat& operator=(const Cat& right);
	virtual void makeSound() const;

};

#endif
