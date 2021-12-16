//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"


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

void Frag()
{
	std::cout << ">>> Frag:\n" << std::endl;
	FragTrap	Frag1("Frag1");
	Frag1.attack("someone");
	Frag1.takeDamage(10);
	Frag1.beRepaired(10);
	Frag1.highFivesGuys();
}

int main( void ) {
	Clap();
	Scav();
	Frag();
	return 0;
}