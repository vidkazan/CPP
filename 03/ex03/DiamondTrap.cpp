//
// Created by Felipe Cody on 12/9/21.
//

#include "DiamondTrap.hpp"
#include <string>

DiamondTrap::DiamondTrap() {
	_name = "defaultDiamondTrap";
//	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
    std::cout << "Diamond \""<< this->_name << "\" default constructor" << std::endl;
};

DiamondTrap::DiamondTrap(const std::string name) {
	_name = name;
//	ClapTrap::_name = _name + "_clap_name";
	_hitPoints = FragTrap::_hitPoints;
	_energyPoints = ScavTrap::_energyPoints;
	_attackDamage = FragTrap::_attackDamage;
    std::cout << "Diamond \""<< this->_name << "\" copy constructor" << std::endl;
};

DiamondTrap::~DiamondTrap(){
    std::cout << "Diamond \""<< this->_name << "\" destructor" << std::endl;
};

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& right){
	std::cout << "Diamond assignation member function called" << std::endl;
	_name = right._name;
//	ClapTrap::_name = _name + "_clap_name";
	FragTrap::_attackDamage = right._attackDamage;
	ScavTrap::_energyPoints = right._energyPoints;
	FragTrap::_hitPoints = right._hitPoints;
	return *this;
}

void    DiamondTrap::attack(std::string const & target){
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(){
//	std::cout << "clap name: " << DiamondTrap::ClapTrap::_name << " name: " << this->_name << std::endl;
}