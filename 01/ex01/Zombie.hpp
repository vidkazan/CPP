//
// Created by Felipe Cody on 12/9/21.
//

#ifndef EX00_ZOMBIE_H
#define EX00_ZOMBIE_H
#include <iostream>

class Zombie{
	private:
		std::string _name;
	public:
		Zombie();
		~Zombie();
		void setName(std::string name);
		void	announce();
};

Zombie* zombieHorde( int N, std::string name );

#endif //EX00_ZOMBIE_H
