//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"

int main( void ) {
	ScavTrap	scav1;
	ScavTrap	scav2("Scav2");
	std::cout << "\n";
	scav2.attack("scav1");
	scav1.takeDamage(0);
	scav2.beRepaired(0);
	scav1.guardGate();
	std::cout << "\n";
	ScavTrap	scav3("Scav3");
	std::cout << "\n";
	return 0;
}
