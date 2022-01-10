//
// Created by Felipe Cody on 12/9/21.
//

#include "easyfind.hpp"
#include <vector>

int main()
{
	std::vector<int> test;
	for(unsigned int i = 0; i < 1200; i++)
	{
		test.push_back(i);
	}
	try
	{
		std::vector<int>::iterator res = easyfind(test, 120);
		std::cout << " value: " << *res << " " << &res;
	}
	catch(std::exception & e) {
		std::cout << "easyfind: num not found\n";
	}
}