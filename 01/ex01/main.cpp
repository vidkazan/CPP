//
// Created by Felipe Cody on 12/9/21.
//

#include "Zombie.hpp"

int main()
{
	int N = 10;
	std::string heap = "Heeeeeeeeaap";
	Zombie *horde = zombieHorde(N, heap);
	for(int i=0;i<N;i++)
		horde[i].announce();
	delete[] horde;
}