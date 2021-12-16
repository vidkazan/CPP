//
// Created by Felipe Cody on 12/9/21.
//

#include "DiamondTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	DiamondTrap	Diamond1("Diamond1");
	std::cout << "\n";
	Diamond1.attack("Diamond1");
	Diamond1.takeDamage(0);
	Diamond1.beRepaired(0);
	Diamond1.whoAmI();
	Diamond1.highFivesGuys();
	Diamond1.guardGate();
	std::cout << "\n";
	return 0;
}
