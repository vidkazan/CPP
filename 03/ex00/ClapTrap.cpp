//
// Created by Felipe Cody on 12/9/21.
//

#include "ClapTrap.hpp"
#include <string>

ClapTrap::ClapTrap() : _name("defaultClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Clap \""<< this->_name << "\" default constructor" << std::endl;
};

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Clap \""<< this->_name << "\" copy constructor" << std::endl;
};

ClapTrap::~ClapTrap(){
    std::cout << "Clap \""<< this->_name << "\" destructor" << std::endl;
};

void    ClapTrap::attack(std::string const & target){
        this->_hitPoints--;
    std::cout << "ClapTrap " << _name << "> attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
    this->_energyPoints -= amount;
    std::cout << "ClapTrap " << _name << " has taken a " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
    this->_energyPoints += amount;
    std::cout << "ClapTrap " << _name << " has got a " << amount << " energy points" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& right){
	std::cout << "Assignation member function called" << std::endl;
	_name = right._name;
    _attackDamage = right._attackDamage;
    _energyPoints = right._energyPoints;
    _hitPoints = right._hitPoints;
	return *this;
}