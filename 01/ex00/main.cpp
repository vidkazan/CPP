//
// Created by Felipe Cody on 12/9/21.
//

#include "Zombie.hpp"

void randomChump( std::string name ){
	Zombie	stack(name);

	stack.announce();
}

Zombie* newZombie( std::string name ){
	Zombie	*heap = new Zombie(name);

	heap->announce();
	return heap;
}

int main()
{
	std::string heap = "Heeeeeeeeaap";
	std::string stack = "Staaaaaaaack";
	Zombie *zombie_heap = newZombie(heap);
	randomChump(stack);
	delete zombie_heap;
}