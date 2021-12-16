//
// Created by Felipe Cody on 12/9/21.
//

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
public:
	FragTrap();
	FragTrap(const std::string name);
	~FragTrap();
	FragTrap&	operator=(const FragTrap& right);
	void	    attack(std::string const & target);
	void highFivesGuys(void);
};

#endif
