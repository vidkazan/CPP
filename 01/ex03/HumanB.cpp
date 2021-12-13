//
// Created by Felipe Cody on 12/9/21.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name) {
}

HumanB::~HumanB(){}

void HumanB::attack() {
	std::cout << _name <<  " attacks with his " <<  _weapon->getType() << std::endl;
}

void		HumanB::setWeapon(Weapon& weapon){
	_weapon = &weapon;
}