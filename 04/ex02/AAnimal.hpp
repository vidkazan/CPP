//
// Created by Felipe Cody on 12/9/21.
//

#ifndef AANIMAL_HPP
#define AANIMAL_HPP
#include <iostream>
#include <iomanip>
#include "Brain.hpp"

class AAnimal{
    protected:
        std::string _type;
		AAnimal();
		AAnimal(AAnimal const & src);
	public:
                virtual ~AAnimal();
                virtual const std::string &getType() const;
                virtual void makeSound() const;
                virtual Brain *getBrain() const = 0;
        AAnimal& operator=(AAnimal const & right);
};

#endif
