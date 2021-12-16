//
// Created by Felipe Cody on 12/9/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    public:
                	ScavTrap();
                	ScavTrap(const std::string name);
                	~ScavTrap();
        ScavTrap&	operator=(const ScavTrap& right);
		void	    attack(std::string const & target);
		void		guardGate();
};

#endif
