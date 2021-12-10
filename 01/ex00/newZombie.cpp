//
// Created by Felipe Cody on 12/9/21.
//

#include "Zombie.hpp"


Zombie* newZombie( std::string name ){
	Zombie	*heap = new Zombie(name);

	heap->announce();
	return heap;
}