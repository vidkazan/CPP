//
// Created by Felipe Cody on 12/9/21.
//

#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap normie;
    ClapTrap braaaainz("Braaaainz");
    
    braaaainz.attack("normie");
    normie.takeDamage(0);
    braaaainz.beRepaired(0);
}
