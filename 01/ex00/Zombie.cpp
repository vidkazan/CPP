//
// Created by Felipe Cody on 12/9/21.
//

#include "Zombie.hpp"

Zombie::Zombie(std::string name)
{
	_name = name;
}

Zombie::~Zombie(){
	std::cout << _name << " dectruction" << std::endl;
}

void Zombie::announce(){
	std::cout << _name << " BraiiiiiiinnnzzzZ..." << std::endl;
}