//
// Created by Felipe Cody on 12/9/21.
//

#include "DiamondTrap.hpp"
#include <string>
#include <iomanip>

DiamondTrap::DiamondTrap() {
	_name = "DiamondTrap";
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << std::setw(15) << "DiamondTrap "<< std::setw(20)<< this->_name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage <<  " | default constructor" << std::endl;
};

DiamondTrap::DiamondTrap(const std::string name) {
	_name = name;
	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ClapTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
	std::cout << std::setw(15) << "DiamondTrap "<< std::setw(20)<< this->_name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage <<  " | copy constructor" << std::endl;
};

DiamondTrap::~DiamondTrap(){
	std::cout << std::setw(15) << "DiamondTrap "<< std::setw(20)<< this->_name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage <<  " | destructor" << std::endl;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& right){
	std::cout << std::setw(15) << "Diamond assignation member function called" << std::endl;
	_name = right._name;
	ClapTrap::_name = _name + "_clap_name";
	FragTrap::_attackDamage = right._attackDamage;
	ScavTrap::_energyPoints = right._energyPoints;
	FragTrap::_hitPoints = right._hitPoints;
	return *this;
}

void    DiamondTrap::attack(std::string const & target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
	std::cout << std::setw(15) << "DiamondTrap " << "	ClapTrap name: " << ClapTrap::_name << " | name: " << this->_name << std::endl;
}