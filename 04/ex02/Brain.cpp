//
// Created by Felipe Cody on 12/9/21.
//

#include "Brain.hpp"

Brain::Brain() {
	std::cout<<  std::setw(10) << "Brain " <<  " default constructor" << std::endl;
};

Brain::Brain(Brain const & src) {
	*this = src;
	std::cout << std::setw(10) << "Brain " << " copy constructor" << std::endl;
};

Brain::~Brain(){
	std::cout << std::setw(10) << "Brain "<< " destructor" << std::endl;
};
Brain& Brain::operator=( Brain const & right){
	for(int i = 0;i < this->nbOfIdeas;i++)
		_ideas[i] = right._ideas[i];
	std::cout<<  std::setw(10) << "Brain assignation member function called" << std::endl;
	return *this;
}
