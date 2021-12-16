//
// Created by Felipe Cody on 12/9/21.
//

#include "ClapTrap.hpp"

int main( void ) {
	std::cout << ">>> Clap:\n" << std::endl;
	ClapTrap	Clap1("Clap1");
	Clap1.attack("someone");
	Clap1.takeDamage(10);
	Clap1.beRepaired(10);
	return 0;
}
