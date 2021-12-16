//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"
#include <string>
#include <iomanip>

ScavTrap::ScavTrap() {
	ClapTrap::_name = "ScavTrap";
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 20;
	std::cout << "ScavTrap "<< std::setw(10) << ClapTrap::_name << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage <<  " | default constructor" << std::endl;
};

ScavTrap::ScavTrap(const std::string name) {
	ClapTrap::_name = name;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 50;
	ClapTrap::_attackDamage = 20;
	std::cout << "ScavTrap " << std::setw(10) << ClapTrap::_name << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage << " | copy constructor" << std::endl;
};

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << std::setw(10) << ClapTrap::_name << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage<< " | destructor" << std::endl;
};

ScavTrap& ScavTrap::operator=(const ScavTrap& right){
	ClapTrap::_name = right._name;
	ClapTrap::_attackDamage = right._attackDamage;
	ClapTrap::_energyPoints = right._energyPoints;
	ClapTrap::_hitPoints = right._hitPoints;
	std::cout << "Assignation member function called" << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage << std::endl;
	return *this;
}

void    ScavTrap::attack(std::string const & target){
	this->_hitPoints--;
	std::cout << "ScavTrap " << std::setw(10) << _name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage<< " | attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void		ScavTrap::guardGate(){
	std::cout << "ScavTrap have entered in Gate keeper mode" << std::endl;
}