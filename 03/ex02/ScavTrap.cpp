//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"
#include <string>

ScavTrap::ScavTrap() {
	_name = "defaultScavTrap";
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << "Scav \""<< this->_name << "\" default constructor" << std::endl;
};

ScavTrap::ScavTrap(const std::string name) {
	_name = name;
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
    std::cout << "Scav \""<< this->_name << "\" copy constructor" << std::endl;
};

ScavTrap::~ScavTrap(){
    std::cout << "Scav \""<< this->_name << "\" destructor" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& right){
	std::cout << "Scav assignation member function called" << std::endl;
	_name = right._name;
	_attackDamage = right._attackDamage;
	_energyPoints = right._energyPoints;
	_hitPoints = right._hitPoints;
	return *this;
}

void    ScavTrap::attack(std::string const & target){
	this->_hitPoints--;
	std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void		ScavTrap::guardGate(){
	std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}