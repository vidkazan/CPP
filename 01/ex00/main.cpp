//
// Created by Felipe Cody on 12/9/21.
//

#include "Zombie.hpp"

int main()
{
	std::string heap = "Heeeeeeeeaap";
	std::string stack = "Staaaaaaaack";
	Zombie *zombie_heap = newZombie(heap);
	randomChump(stack);
	delete zombie_heap;
}