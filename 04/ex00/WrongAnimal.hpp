//
// Created by Felipe Cody on 12/9/21.
//

#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP
#include <iostream>

class WrongAnimal{
    protected:
        std::string _type;
    public:
                WrongAnimal();
                WrongAnimal(const std::string type);
                ~WrongAnimal();
                std::string getType() const;
                void makeSound() const;
        WrongAnimal& operator=(const WrongAnimal& right);
        
};

#endif
