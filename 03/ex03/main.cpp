//
// Created by Felipe Cody on 12/9/21.
//

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

//
//void Clap()
//{
//	std::cout << "\n>>> Clap:\n" << std::endl;
//	ClapTrap	Clap1("Clap1");
//	Clap1.attack("someone");
//	Clap1.takeDamage(10);
//	Clap1.beRepaired(10);
//}
//
//void Scav()
//{
//	std::cout << "\n>>> Scav:\n" << std::endl;
//	ScavTrap	Scav1("Scav1");
//	Scav1.attack("someone");
//	Scav1.takeDamage(10);
//	Scav1.beRepaired(10);
//	Scav1.guardGate();
//}
//
//void Frag()
//{
//	std::cout <<"\n>>> Frag:\n" << std::endl;
//	FragTrap	Frag1("Frag1");
//	Frag1.attack("someone");
//	Frag1.takeDamage(10);
//	Frag1.beRepaired(10);
//	Frag1.highFivesGuys();
//}

void Diamond()
{
	std::cout << "\n>>> Diamond:\n" << std::endl;
	DiamondTrap	Diamond1("Diamond1");
	Diamond1.attack("someone");
	Diamond1.takeDamage(10);
	Diamond1.beRepaired(10);
	Diamond1.whoAmI();
	Diamond1.guardGate();
	Diamond1.highFivesGuys();
}

int main( void ) {
//	Clap();
//	Scav();
//	Frag();
	Diamond();
	return 0;
}