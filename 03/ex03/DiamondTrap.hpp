//
// Created by Felipe Cody on 12/9/21.
//

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <iostream>
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
	private:
		std::string _name;
    public:
			void    attack(std::string const & target);
                	DiamondTrap();
                	DiamondTrap(const std::string name);
                	~DiamondTrap();
        DiamondTrap&	operator=(const DiamondTrap& right);
		void		whoAmI();
};

#endif
