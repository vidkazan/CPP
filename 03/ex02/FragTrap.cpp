//
// Created by Felipe Cody on 12/9/21.
//

#include "FragTrap.hpp"
#include <string>
#include <iomanip>

FragTrap::FragTrap() {
	ClapTrap::_name = "FragTrap";
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 100;
	ClapTrap::_attackDamage = 30;
	std::cout << "FragTrap "<< std::setw(10) << ClapTrap::_name << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage <<  " | default constructor" << std::endl;
};

FragTrap::FragTrap(const std::string name) {
	ClapTrap::_name = name;
	ClapTrap::_hitPoints = 100;
	ClapTrap::_energyPoints = 100;
	ClapTrap::_attackDamage = 30;
	std::cout << "FragTrap " << std::setw(10) << ClapTrap::_name << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage << " | copy constructor" << std::endl;
};

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << std::setw(10) << ClapTrap::_name << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage<< " | destructor" << std::endl;
};

FragTrap& FragTrap::operator=(const FragTrap& right){
	ClapTrap::_name = right._name;
	ClapTrap::_attackDamage = right._attackDamage;
	ClapTrap::_energyPoints = right._energyPoints;
	ClapTrap::_hitPoints = right._hitPoints;
	std::cout << "Assignation member function called" << " | hitPoints " << ClapTrap::_hitPoints << " | energyPoints "<< ClapTrap::_energyPoints << " | attackDamage "<< ClapTrap::_attackDamage << std::endl;
	return *this;
}

void    FragTrap::attack(std::string const & target){
	this->_hitPoints--;
	std::cout << "FragTrap " << std::setw(10) << _name << " | hitPoints " << _hitPoints << " | energyPoints "<< _energyPoints << " | attackDamage "<< _attackDamage<< " | attack " << target << ", causing " << this->_attackDamage << " points of damage !" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap gives high fives!" << std::endl;
}