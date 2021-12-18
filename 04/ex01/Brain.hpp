//
// Created by Felipe Cody on 12/9/21.
//

#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <iomanip>

class Brain{
    protected:
		static const int nbOfIdeas = 100;
		std::string _ideas[nbOfIdeas];
    public:
        ~Brain();
        Brain();
        Brain(Brain const & brain);
        Brain& operator=(Brain const & right);
};

#endif
