//
// Created by Felipe Cody on 12/9/21.
//

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <iomanip>

class Weapon{
private:
	std::string _type;
public:
				Weapon(std::string type);
	void		setType(std::string type);
	std::string getType();
				~Weapon();
};

#endif