//
// Created by Felipe Cody on 12/9/21.
//

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <iomanip>

#include "Weapon.hpp"

class HumanA{

private:
	std::string _name;
	Weapon&		_weapon;

public:
				HumanA(std::string name, Weapon &weapon);
				~HumanA();
	void		attack();
};

#endif