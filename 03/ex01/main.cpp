//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

void Clap()
{
	std::cout << ">>> Clap:\n" << std::endl;
	ClapTrap	Clap1("Clap1");
	Clap1.attack("someone");
	Clap1.takeDamage(10);
	Clap1.beRepaired(10);
}

void Scav()
{
	std::cout << ">>> Scav:\n" << std::endl;
	ScavTrap	Scav1("Scav1");
	Scav1.attack("someone");
	Scav1.takeDamage(10);
	Scav1.beRepaired(10);
	Scav1.guardGate();
}

int main( void ) {
	Clap();
	Scav();
	return 0;
}
