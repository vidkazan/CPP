//
// Created by Felipe Cody on 12/9/21.
//

#include "FragTrap.hpp"
#include <string>

FragTrap::FragTrap() {
	_name = "defaultFragTrap";
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
    std::cout << "Frag \""<< this->_name << "\" default constructor" << std::endl;
};

FragTrap::FragTrap(const std::string name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 100;
	_attackDamage = 30;
    std::cout << "Frag \""<< this->_name << "\" copy constructor" << std::endl;
};

FragTrap::~FragTrap(){
    std::cout << "Frag \""<< this->_name << "\" destructor" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap& right){
	std::cout << "Frag assignation member function called" << std::endl;
	_name = right._name;
	_attackDamage = right._attackDamage;
	_energyPoints = right._energyPoints;
	_hitPoints = right._hitPoints;
	return *this;
}

void		FragTrap::highFivesGuys(void){
	std::cout << "FragTrap top five guys what...?" << std::endl;
}

void    FragTrap::attack(std::string const & target){
	this->_hitPoints--;
	std::cout << "FragTrap " << _name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}