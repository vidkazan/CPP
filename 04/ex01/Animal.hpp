//
// Created by Felipe Cody on 12/9/21.
//

#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <iomanip>
#include "Brain.hpp"

class Animal{
    protected:
        std::string _type;
    public:
                Animal();
                Animal(Animal const & src);
                virtual ~Animal();
                virtual const std::string &getType() const;
                virtual void makeSound() const;
                virtual Brain *getBrain() const = 0;
        Animal& operator=(Animal const & right);
};

#endif
