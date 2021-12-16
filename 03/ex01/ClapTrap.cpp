//
// Created by Felipe Cody on 12/9/21.
//

#include "ClapTrap.hpp"
#include <string>
#include <iomanip>

ClapTrap::ClapTrap() : _name("ClapTrap"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap "<< std::setw(10)<< this->_name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage <<  " | default constructor" << std::endl;
};

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "ClapTrap "<< std::setw(10)<< this->_name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage << " | copy constructor" << std::endl;
};

ClapTrap::~ClapTrap(){
	std::cout << "ClapTrap "<< std::setw(10)<< this->_name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage<< " | destructor" << std::endl;
};

void    ClapTrap::attack(std::string const & target){
	this->_hitPoints--;
	std::cout << "ClapTrap " << std::setw(10)<< _name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage<< " | attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount){
	this->_energyPoints -= amount;
	std::cout << "ClapTrap " << std::setw(10)<< _name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage << " | has taken a " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount){
	this->_energyPoints += amount;
	std::cout << "ClapTrap " << std::setw(10)<< _name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage<< " | has got a " << amount << " energy points" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& right){
	_name = right._name;
	_attackDamage = right._attackDamage;
	_energyPoints = right._energyPoints;
	_hitPoints = right._hitPoints;
	std::cout << "Assignation member function called" << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage << std::endl;
	return *this;
}