//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main( void ) {
	FragTrap	Frag1;
	FragTrap	Frag2("Frag2");
	std::cout << "\n";
	Frag2.attack("Frag1");
	Frag1.takeDamage(0);
	Frag2.beRepaired(0);
	Frag1.highFivesGuys();
	std::cout << "\n";
	FragTrap	Frag3("Frag3");
	std::cout << "\n";
	return 0;
}
