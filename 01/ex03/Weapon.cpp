//
// Created by Felipe Cody on 12/9/21.
//

#include "Weapon.hpp"

Weapon::~Weapon() {}

void	Weapon::setType(std::string type){
	_type = type;
}

std::string Weapon::getType(){
	return _type;
}

Weapon::Weapon(std::string type) : _type(type){
}