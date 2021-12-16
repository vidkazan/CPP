//
// Created by Felipe Cody on 12/9/21.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
	private:
		std::string _name;
		int         _hitPoints;
		int         _energyPoints;
		int         _attackDamage;
    public:
                	ScavTrap();
                	ScavTrap(const std::string name);
                	~ScavTrap();
        ScavTrap&	operator=(const ScavTrap& right);
        void	    attack(std::string const & target);
		void		guardGate();
};

#endif
